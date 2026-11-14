//You have been given a sorted array ARR (of size M, where M is very large) of two elements, 0 and 1.
//It is desired to compute the count of 0s in the array ARR.
//Propose and implement an efficient algorithm to accomplish the task. 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of array : ";// array contains only 0 and 1 in sorted order
    for(int i=0;i<n;i++) cin>>arr[i];
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==1){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<"no of zeroes : "<<ans;
}