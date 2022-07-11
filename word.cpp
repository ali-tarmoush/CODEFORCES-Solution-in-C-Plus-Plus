/*
 * Problem Link   : https://codeforces.com/problemset/problem/59/A
 * Problem Name   : Word
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int t=0,k=0;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))
		t++;
		else
		k++;
	}
	if(t>k)
	for(int i=0;i<s.size();i++)
	s[i]=toupper(s[i]);
	else
	for(int i=0;i<s.size();i++)
	s[i]=tolower(s[i]);
	cout<<s;
	return 0;
}