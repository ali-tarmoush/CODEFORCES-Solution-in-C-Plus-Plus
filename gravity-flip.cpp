/*
 * Problem Link   : https://codeforces.com/problemset/problem/405/A
 * Problem Name   : Gravity Flip
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e2 + 56;
int m[MAX];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> m[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		if (m[j]>m[j + 1])
		{
			int swap = m[j];
			m[j] = m[j + 1];
			m[j + 1] = swap;
		}
	}
	for (int i = 0; i < n; i++)
		cout << m[i]<<" ";
	return 0;
}