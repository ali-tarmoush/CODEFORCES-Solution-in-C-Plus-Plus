/*
 * Problem Link   : https://codeforces.com/problemset/problem/266/A
 * Problem Name   : Stones on the Table
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,t=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
		if(s[i]==s[i+1])
		t++;
	cout<<t;
    return 0 ;
}