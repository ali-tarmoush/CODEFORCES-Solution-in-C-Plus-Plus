/*
 * Problem Link   : https://codeforces.com/problemset/problem/546/A
 * Problem Name   : Soldier and Bananas
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int k, n, w;
	cin >> k >> n >> w;
	int sum = 0;
	for (int i = 1; i <=w; i++){
		sum = sum + (k*i);
	}
	if (sum > n)
		cout << sum - n;
	else
		cout << 0;
	return 0;
}