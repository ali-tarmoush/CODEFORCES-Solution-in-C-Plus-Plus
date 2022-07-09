/*
 * Problem Link   : https://codeforces.com/problemset/problem/1030/A
 * Problem Name   : In Search of an Easy Problem
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}
	if (sum != 0)
		cout << "HARD";
	else
		cout << "EASY";
    return 0 ;
}