/*
 * Problem Link   : https://codeforces.com/problemset/problem/136/A
 * Problem Name   : Presents
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e2+56;
int p[MAX];
int in[MAX];
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>p[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(p[j]==i){
				in[i]=j;
			}
	for(int i=1;i<=n;i++)
	cout<<in[i]<<" ";
	return 0;
}