/*
 * Problem Link   : https://codeforces.com/problemset/problem/69/A
 * Problem Name   : Young Physicist
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e2+56;
int m[MAX][5];
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<3;j++)
	cin>>m[i][j];
	int x=0,y=0,z=0;
	for(int i=0;i<n;i++){
		x+=m[i][0];
		y+=m[i][1];
		z+=m[i][2];
	}
	if(x==0&&y==0&&z==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}