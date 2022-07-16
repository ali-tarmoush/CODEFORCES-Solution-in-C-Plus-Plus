/*
 * Problem Link   : https://codeforces.com/problemset/problem/758/A
 * Problem Name   : Holiday Of Equality
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
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max = a[0];
	for (int i = 0; i < n;i++)
	if (a[i]>max)
		max = a[i];
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += (max - a[i]);
	cout << sum <<endl;
	return 0;
}
 