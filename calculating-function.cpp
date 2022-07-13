/*
 * Problem Link   : https://codeforces.com/problemset/problem/486/A
 * Problem Name   : Calculating Function
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long z = (n+1) / 2;
	if (n % 2 == 0)
		cout << z<<endl;
	else
		cout << -1 * z<<endl;
	return 0;
}