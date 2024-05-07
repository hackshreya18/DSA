#include <bits/stdc++.h>
using namespace std;

int fibonacci(vector<int>&dp,int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]= fibonacci(dp,n-1)+ fibonacci(dp,n-2);
}

int main(){
    int n;
    cin >>n;
    vector<int> dp(n+1,-1);

    //Memoization:
    cout<<"For Memoization:"<<fibonacci(dp,n)<<endl; //T.C=O(N) ,SC=O(N)+O(N);

    //Tabulation:
    vector<int>dp2(n+1,-1);
    dp2[0]=0;
    dp2[1]=1;

    for(int i=2;i<=n;i++){
        dp2[i]=dp2[i-1]+dp2[i-2];
    }

     cout<<"For Tabulation:"<<dp2[n]<<endl;//T.C=O(N) ,SC=O(N);


     //Space Optimization:

     int prev=0;
     int prev2=1;
     if(n==0){
        cout<<prev<<endl;
     }
     if(n==1){
        cout<<prev2<<endl;
     }
     for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev=prev2;
        prev2=curr;
    }

     cout<<"For Tabulation:"<<prev2<<endl;//T.C=O(N) ,SC=O(1);
}