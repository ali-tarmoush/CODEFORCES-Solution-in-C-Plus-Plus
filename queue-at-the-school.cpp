/*
 * Problem Link   : https://codeforces.com/problemset/problem/266/B
 * Problem Name   : Queue at the School
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0;i<t;i++)
		for(int j=0;j<n;j++)
			if(s[j]=='B' &&s[j+1]=='G'){
				char a=s[j];
				s[j]=s[j+1];
				s[j+1]=a;
				j++;
			}
	cout<<s;
	return 0;
}