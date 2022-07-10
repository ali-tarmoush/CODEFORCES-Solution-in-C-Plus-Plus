/*
 * Problem Link   : https://codeforces.com/problemset/problem/231/A
 * Problem Name   : Team
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAXX = 1000 +56;
int m[MAXX][MAXX];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; n >= i; i++)
	for (int j = 1; 3 >= j; j++)
		cin >> m[i][j];
		int k = 0;
	for (int i = 1; n >= i; i++)
	{
		int sum = 0;
		for (int j = 1; 3 >= j; j++)
			sum += m[i][j];
		if (sum >= 2)
			k++;
	}
	cout << k;
	return 0;
}