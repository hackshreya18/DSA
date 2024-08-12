#include<bits/stdc++.h>
using namespace std;

bool check(int a){
  if(a<=1)return false;
  for(int i=2;i*i<=a;i++){
    if(a%i==0)return false;
  }
  return true;
}


vector<string> solve(vector<int> arr){
  vector<string> ans(arr.size(),"");

  for(int i=0;i<arr.size();i++){
     int t=arr[i];
     string s=to_string(t);
     string p = s;
     if(s.length()==6){
      ans[i]+='C';
     }
     else{
      ans[i]+='W';
     }

     if(t==0)ans[i]+='Z';
     else if(t==1)ans[i]+='O';
     else{
      if(check(t)){
        ans[i]+='P';
      }
      else{
        ans[i]+='N';
      }
     }

     while(s.length()>1){
         int sum=0;
         for(int i=0;i<s.length();i++){
          sum=sum+(s[i]-'0');
         }

         s=to_string(sum);
     }

     ans[i]+=s;

     if(t%2==0){
      ans[i]+=to_string(t/2);
     }
     else{
      ans[i]+=to_string((t-1)/2);
     }
  }

  return ans;
}
int main(){
  int n=2;
  vector<int>arr={123456,1234567};

  vector<string>a=solve(arr);
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
}

