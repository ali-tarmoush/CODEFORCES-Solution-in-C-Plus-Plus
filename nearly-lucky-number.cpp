/*
 * Problem Link   : https://codeforces.com/problemset/problem/110/A
 * Problem Name   : Nearly Lucky Number
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	cin >> st;
	int t = 0;
	for (int i = 0; i < st.size();i++)
	if (st[i] == '4' || st[i] == '7')
		t++;
	if (t == 4 || t== 7)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
