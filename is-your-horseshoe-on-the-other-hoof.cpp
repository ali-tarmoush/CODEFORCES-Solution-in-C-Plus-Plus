/*
 * Problem Link   : https://codeforces.com/problemset/problem/228/A
 * Problem Name   : Is your horseshoe on the other hoof?
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX = 10;
int m[MAX];
int main()
{
	int t = 0;
	for (int i = 0; i < 4; i++)
		cin >> m[i];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		if (m[i] == m[j] && i!=j)
		{
			t++;
			m[i] = 0;
		}
	}
	cout << t ;
	return 0;
}