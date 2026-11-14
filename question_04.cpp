//You are given a list of n-1 integers and these integers are in the range of 1 to n.
//There are no duplicates in the list. One of the integers is missing in the list. 
//Write an efficient code to find the missing integer.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    //range is 1 to n+1;
    int s1=((n+1)*(n+2))/2;
    //now calculate sum of given array
    int s2=0;
    for(int i=0;i<n;i++) s2+=arr[i];
    cout<<"missing number is : "<<s1-s2;
}
