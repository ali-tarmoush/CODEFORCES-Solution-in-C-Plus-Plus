/*
 * Problem Link   : https://codeforces.com/problemset/problem/1041/A
 * Problem Name   : Heist
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
#include<bits/stdc++.h>
using namespace std;
const int MAXX = 1000 +56;
int n[MAXX];
int main(){
	int x;
	cin >> x;
	for (int i = 0; i<x; i++)
		cin >> n[i];
	int max = n[0];
	for (int i = 0; i<x; i++)
	if (n[i]>max)
		max =n[i];
	int min =n[0];
	for (int i = 0; i<x; i++)
	if (n[i]<min)
		min = n[i];
    int k = max - min + 1;
	int w = k - x;
	cout << w;
	return 0;
}