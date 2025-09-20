#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
int binaryexp(int a, int b)
{
    int prod = 1;
    while(b)
    {
        if(b&1)
        {
            prod = (prod * 1LL * a)%M;
        }
        a = (a * 1LL * a)%M;
        b >>=1;
    }
    return prod;
}
int modular_inverse(int a)
{
    return binaryexp(a,M-2);
}
int dp[300];
int fact(int n)
{
    if(dp[n] != 0)
    {
        return dp[n];
    }
    dp[n] = (fact(n-1) * 1LL * n)%M;
    return dp[n];
}
int combi(int n)
{
    int inverse1 = modular_inverse(dp[n]);
    int rem1 = dp[2*n];

    return ((rem1 % M) *((inverse1 * 1LL * inverse1)%M) % M);
}

int main()
{
    for(int i = 0;i<105;i++)
    {
        dp[i] = 0;
    }
    dp[0] = dp[1] = 1;

    int one = fact(200);
    int n;
    cin >> n;
    int inverse_n = modular_inverse(n+1);
    cout << (combi(n) * 1LL *inverse_n)%M;
}