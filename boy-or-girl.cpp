/*
 * Problem Link   : https://codeforces.com/problemset/problem/236/A
 * Problem Name   : Boy or Girl
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	for(int j=i+1;j<s.size();j++)
	if(s[i]==s[j])
	s[i]='+';
	int t=0;
	for(int i=0;i<s.size();i++)
	if(s[i]!='+')
	t++;
	if(t%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
	
    return 0 ;
}