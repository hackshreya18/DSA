// Problem Statement: Given a number of stairs. Starting from the 0th stair we need to climb to the “Nth” stair. At a time we can climb either one or two steps. We need to return the total number of distinct ways to reach from 0th to Nth stair.

#include <bits/stdc++.h>
using namespace std;

int climbStair(vector<int>&dp,int n){
    if(n<=1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]= climbStair(dp,n-1)+ climbStair(dp,n-2);
}

int main(){
    int n;
    cin >>n;
    vector<int> dp(n+1,-1);

    //Memoization:
    cout<<"For Memoization:"<<climbStair(dp,n)<<endl; //T.C=O(N) ,SC=O(N)+O(N);

    //Tabulation:
    vector<int>dp2(n+1,-1);
    dp2[0]=1;
    dp2[1]=1;

    for(int i=2;i<=n;i++){
        dp2[i]=dp2[i-1]+dp2[i-2];
    }

     cout<<"For Tabulation:"<<dp2[n]<<endl;//T.C=O(N) ,SC=O(N);


     //Space Optimization:

     int prev=1;
     int prev2=1;
     if(n<=1){
        cout<<prev2<<endl;
     }
     for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev=prev2;
        prev2=curr;
    }

     cout<<"For Tabulation:"<<prev2<<endl;//T.C=O(N) ,SC=O(1);
}