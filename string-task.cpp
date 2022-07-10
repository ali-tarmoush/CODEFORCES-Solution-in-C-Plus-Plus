/*
 * Problem Link   : https://codeforces.com/problemset/problem/118/A
 * Problem Name   : String Task
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    string st;
	cin >> st;
	for (int i = 0; i<st.size(); ++i) {
		st[i] = tolower(st[i]);
	}
	for (int i = 0; i<st.size(); ++i){
		if (st[i] != 'a' && st[i] != 'o' && st[i] != 'y' && st[i] != 'e' && st[i] != 'u' && st[i] != 'i')
			cout << "." << st[i];
		else
			st[i] = '.';
	}
    return 0 ;
}