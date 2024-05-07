
#include <iostream>
using namespace std;

int partition(int a[],int s,int e){
    int pivot=a[s];
    int c=0;
    
    for(int i=s+1;i<=e;i++){
        if(pivot >= a[i]) 
        c++;
    }
    int pivotIndex=c+s;
    swap(a[pivotIndex],a[s]);
    
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(pivot>a[i]){
            i++;
        }
        while(pivot<a[j]){
            j--;
        }
        if(pivotIndex>i  && pivotIndex<j){
            swap(a[i++],a[j--]);
        }
    }
    return pivot;
}

void quickSort(int a[],int s,int e){
    //base case
    if(s>=e) return ;
    
    int p=partition(a,s,e);
    
    quickSort(a,s,p-1);
    
    quickSort(a,p+1,e);
}

int main(){
    int a[8]={4,1,6,8,3,2,12,0};
    int n=8;
    
    cout<<"Before:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    
    quickSort(a,0,n-1);
    
     cout<<"After:"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
