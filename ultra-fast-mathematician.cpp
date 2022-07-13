/*
 * Problem Link   : https://codeforces.com/problemset/problem/61/A
 * Problem Name   : Ultra-Fast Mathematician
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++)
	if(s1[i]==s2[i])
	cout<<0;
	else
	cout<<1;
	return 0;
}