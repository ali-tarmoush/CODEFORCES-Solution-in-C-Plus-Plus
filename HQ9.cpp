/*
 * Problem Link   : https://codeforces.com/problemset/problem/133/A
 * Problem Name   : HQ9+
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
	string st;
	cin >> st;
	bool p;
	for (int i = 0; i < st.size(); i++)
	if (st[i] == 'H' || st[i] == 'Q' || st[i] == '9' || st[i] == ' + '){
		p = 1;
		break;
	}
	else
		p = 0;
	(p == 1)?cout << "YES"<<endl:cout << "NO"<<endl;
	return 0;
}