/*
 * Problem Link   : https://codeforces.com/problemset/problem/96/A
 * Problem Name   : Football
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	cin >> st;
	int a = st.find("1111111");
	int b = st.find("0000000");
	if (a != -1 || b != -1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}