//Given an array A[1 .. n] of integers, compute the length of a longest increasing subsequence. A sequence B[1 .. 1] is increasing  if B[i] > B[i    1] for every index
//i > 2. For example, given the array
//3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 7)
#include<iostream>
#include<vector>
using namespace std;
int LIS(vector<int> &arr){
    int n=arr.size();
    vector<int> dp(n,1);
    int maxi=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]) dp[i]=max(dp[i],dp[j]+1);
        }
        maxi=max(maxi,dp[i]);
    }
    return maxi;
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"length of longest increasing subsequence : "<<LIS(arr);
}