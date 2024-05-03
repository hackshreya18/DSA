//Sum of min and max elements of all subarrays of size k

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int nums[7]={2,5,1,7,-3,-1,-2};
    int n=7;
    int sum=0;
    int k;
    cout<<"Enter the window size for k"<<endl;
    cin>>k;
    if(k>n){
        return -1;
    }
    
    deque<int> q1;
    deque<int> q2;
    
    int i=0;
    int j=0;
    
    while(j<n){
        if(q1.empty()){
            q1.push_back(nums[j]);
        }
        else{
            if(nums[j]>q1.front()){
                q1.push_back(nums[j]);
            }
            else{
                while(!q1.empty() && q1.back() > nums[j] ){
                    q1.pop_back();
                }
                q1.push_back(nums[j]);
            }
        }
        
        if(q2.empty()){
            q2.push_back(nums[j]);
        }
        else{
            if(nums[j] < q2.front()){
                q2.push_back(nums[j]);
            }
            else{
                while(!q2.empty() && q2.back() < nums[j] ){
                    q2.pop_back();
                }
                q2.push_back(nums[j]);
            }
        }
        // cout<<q1.front()<<" "<<q2.front()<<endl;
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            sum+=q1.front()+q2.front();
            
            if(nums[i]==q1.front()){
                q1.pop_front();
            }
            if(nums[i]==q2.front()){
                q2.pop_front();
            }
            
            i++;
            j++;
        }
        
    }
    
    cout<<sum<<endl;
    
}
