#include<iostream>
#include<vector>
 
using namespace std;
 
 //rec + mem
 int fib(int n, vector<int> &dp){
if(n==0 || n==1) {
    return n;
}

if(dp[n] != -1){
    return dp[n];
}
dp[n]=fib(n-1, dp)+fib(n-2, dp);
return dp[n];
 }
int main(){
int n;
cin>>n;
vector<int> dp(n+1);

for (int i = 0; i < n; i++)
{
    dp[i] = -1;
}
cout<< fib(n, dp)<<endl;
 
 return 0;
}

//tabulation
/* vector<int> dp[n+10];
   dp[0]=0
   dp[1]=1
   for (int i = 2; i < n; i++){
   dp[n]=dp[n-1]+dp[n-2];
   }
   return dp;
   */