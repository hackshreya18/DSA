#include<bits/stdc++.h>
using namespace std;

int solve(int input1, int input2, int input3, int input4){
    int sum = 0;
        
        int max1=INT_MAX;
        int max2=INT_MIN;
        int max3=INT_MAX;
        while (input1 != 0 || input2 != 0 || input3 != 0) {
            int a1 = input1 % 10;
            int b1 = input2 % 10;
            int c1 = input3 % 10;
            
            max1=min(max1,a1);
            max2=max(max2,b1);
            max3=min(max3,c1);
            
            input1 /= 10;
            input2 /= 10;
            input3 /= 10;
        }

        return (max1*max2*max3)-input4;
}

int main(){
   
    int a=3521,b=2452,c=1352;
    int d=38;
    
    cout<< solve(a,b,c,d)<<endl;
   
}