/*
 * Problem Link   : https://codeforces.com/problemset/problem/467/A
 * Problem Name   : George and Accommodation
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int t = 0;
	for (int i = 0; i < n; i++){
		int p, q;
		cin >> p >> q;
		if (q - p >= 2)
			t++;
	}
	cout << t;
	return 0;
}
 