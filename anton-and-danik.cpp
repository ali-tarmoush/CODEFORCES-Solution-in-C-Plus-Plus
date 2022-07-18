/*
 * Problem Link   : https://codeforces.com/problemset/problem/734/A
 * Problem Name   : Anton and Danik
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n,a=0,d=0;
	cin>>n;
	string st;
	cin>>st;
	for(int i=0;i<n;i++){
		if(st[i]=='A')
		a++;
		else
		d++;
	}
	if(a>d)
	cout<<"Anton"<<endl;
	else if(d>a)
	cout<<"Danik"<<endl;
	else
	cout<<"Friendship"<<endl;
	return 0;
}