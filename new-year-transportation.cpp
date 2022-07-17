/*
 * Problem Link   : https://codeforces.com/problemset/problem/500/A
 * Problem Name   : New Year Transportation
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=3*1e4+1;
int a[MAX];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    while(sum < t - 1) 
        sum += a[sum];
    (sum == t - 1)?cout << "YES" << endl:cout << "NO" << endl;
	return 0;
}