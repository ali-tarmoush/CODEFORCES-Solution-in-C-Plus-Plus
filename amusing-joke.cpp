/*
 * Problem Link   : https://codeforces.com/problemset/problem/141/A
 * Problem Name   : Amusing Joke
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int s11=0,s22=0,s33=0;
	for(int i=0;i<s1.size();i++)
	for(int j=0;j<s3.size();j++)
	if(s1[i]==s3[j]){
		s3[j]='+';
		s11++;
		break;
	}
	for(int i=0;i<s2.size();i++)
	for(int j=0;j<s3.size();j++)
	if(s2[i]==s3[j]){
		s3[j]='+';
		s22++;
		break;
	}
	for(int i=0;i<s3.size();i++)
	if(s3[i]!='+')
	s33++;
	if(s11==s1.size() && s22==s2.size() && s33==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}