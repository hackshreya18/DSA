#include <iostream>
using namespace std;

int inv_count(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
            count++;
        }
    }
    return count;
}

int main(){
    int arr[5]={2,4,1,3,5};
    int n=5;
    cout<<"Inversion count:"<<endl;
    cout<<inv_count(arr,n);
    return 0;
}
