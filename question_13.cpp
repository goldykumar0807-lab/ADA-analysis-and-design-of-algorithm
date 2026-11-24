//Given an array A[1 .. n] of integers, compute the length of a longest alternating subsequence. A sequence B[1  . 1] is alternating if B[i] < B[i    1] for every even index i > 2, and B[i] > B[i    1] for
//every odd index i > 3. For example, given the array
//3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 7)
#include<iostream>
#include<vector>
using namespace std;
int LAS(vector<int> &arr){
    int n=arr.size();
    vector<int> up(n,1);
    vector<int> down(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                //prev sequence must be decreasing to maintain alternate sequence.
                up[i]=max(up[i],down[j]+1);
            }
            else{
                //prev sequence must be increasing
                down[i]=max(down[i],up[j]+1);
            }
        }
    }
    int ans=1;
    for(int i=0;i<n;i++){
        ans=max(ans,max(up[i],down[i]));
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<"length of longest alternating subsequence : "<<LAS(v);
}