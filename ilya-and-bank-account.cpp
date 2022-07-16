/*
 * Problem Link   : https://codeforces.com/problemset/problem/313/A
 * Problem Name   : Ilya and Bank Account
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e2 + 56;
int a[MAX];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else{
        n=abs(n);
        long long a=n%10;
        n/=10;
        long long b=n%10;
        n/=10;
        cout<<(-1)*min(n*10+a,n*10+b)<<endl;
    }
	return 0;
}
 