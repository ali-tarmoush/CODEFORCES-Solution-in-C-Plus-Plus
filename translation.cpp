/*
 * Problem Link   : https://codeforces.com/problemset/problem/41/A
 * Problem Name   : Translation
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace  std;
int main() {
	string s1,s2;
	cin>>s1>>s2;
    reverse(s2.begin(),s2.end());
	if(s1==s2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}