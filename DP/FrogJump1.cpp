// Given a number of stairs and a frog, the frog wants to climb from the 0th stair to the (N-1)th stair. At a time the frog can climb either one or two steps. A height[N] array is also given. Whenever the frog jumps from a stair i to stair j, the energy consumed in the jump is abs(height[i]- height[j]), where abs() means the absolute difference. We need to return the minimum energy that can be used by the frog to jump from stair 0 to stair N-1.

#include<bits./stdc++.h>
using namespace std;

int solve(int n, vector<int>& heights,vector<int> &dp){
    if(n<=1)return 0;
    if(n==2)return abs(heights[n-1]-heights[n-2]);

    if(dp[n]!=-1){
        return dp[n];
    }
    int left=solve(n-1,heights,dp)+abs(heights[n-2]-heights[n-1]);
    int right=solve(n-2,heights,dp)+abs(heights[n-3]-heights[n-1]);

    return dp[n]=min(left,right);
}

int main(){
    int n;
    cin>>n;

    vector<int>heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }

    //////Tabulation:

    if(n==1){
        cout<< 0<<endl;
    }
    else{
        vector<int> dp(n,0);
        dp[0]=0;
        dp[1]=abs(heights[0]-heights[1]);
    
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1]+abs(heights[i-1]-heights[i]),dp[i-2]+abs(heights[i-2]-heights[i]));
        }
        cout<< dp[n-1]<<endl;
    }
    

    //////Space Optimization:

    if(n==1){
        cout<<0<<endl;
    }
    else{
        int a=0;
        int b=abs(heights[0]-heights[1]);

        for(int i=3;i<=n;i++){
            int c=min(b+abs(heights[i-2]-heights[i-1]),a+abs(heights[i-3]-heights[i-1]));
            a=b;
            b=c;
        }
    cout<< b << endl;
    }
    



    ///////Memoization:

    vector<int> dp2(n+1,-1);
    cout<< solve(n,heights,dp2);
    
}

