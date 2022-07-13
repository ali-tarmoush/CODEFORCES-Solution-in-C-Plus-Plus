/*
 * Problem Link   : https://codeforces.com/problemset/problem/200/B
 * Problem Name   : Drinks
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int t, sum = 0;
	for (int i = 0; i < n; i++){
		cin >> t;
		sum += t;
	}
	float rr = float(sum) / n;
	cout << rr;
	return 0;
}