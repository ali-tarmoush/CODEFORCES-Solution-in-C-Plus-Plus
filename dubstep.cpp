/*
 * Problem Link   : https://codeforces.com/problemset/problem/208/A
 * Problem Name   :  Dubstep
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	if(  (s[i]=='W' &&s[i+1]=='U'&&s[i+2]=='B') || (s[i]=='U' &&s[i-1]=='W'&&s[i+1]=='B') || (s[i]=='B' &&s[i-1]=='U'&&s[i-2]=='W')   ){
		cout<<" ";
	}
	else
	cout<<s[i];
	return 0;
}