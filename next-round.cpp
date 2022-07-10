/*
 * Problem Link   : https://codeforces.com/problemset/problem/158/A
 * Problem Name   : Next Round
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e2;
int m[MAX];
int main (){
    int n, k;
	cin >> n >> k;
	k--;
	int l = 0;
	for (int i = 0; i<n; ++i)
	{
		cin >> m[i];
		if (m[i] >= m[k] && m[i]>0)
			l++;
	}
	cout << l;
    return 0 ;
}