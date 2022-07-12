/*
 * Problem Link   : https://codeforces.com/problemset/problem/58/A
 * Problem Name   : Chat room
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1="hello",s2;
	cin>>s2;
	int a=0,c=0;
	for(int i=0;i<s2.size();i++)
	if(s2[i]==s1[a]){
		a++;
		c++;
	}
	if(c==5)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}