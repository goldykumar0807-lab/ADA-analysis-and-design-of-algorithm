//Given an array A[1 .. n], compute the length of a longest palindrome subsequence of A.
//Recall that a sequence B[1 .. 1] is a palindrome if B[i] B[1— i *  1] for every index i.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int LPS(string s1,string s2){
    int n=s1.length();
    vector<vector<int>> dp(n+1, vector<int> (n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}
int main(){
    string s1;
    cout<<"enter a string : ";
    cin>>s1;
    string s2=s1;
    reverse(s2.begin(),s2.end());
    cout<<"length of longest palindromic subsequence is : "<<LPS(s1,s2);
}