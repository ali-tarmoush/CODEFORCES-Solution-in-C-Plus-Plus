/*
 * Problem Link   : https://codeforces.com/problemset/problem/785/A
 * Problem Name   : Anton and Polyhedrons
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin >>n;
	string st;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>st;
		if(st=="Tetrahedron")
		sum+=4 ;
		else if(st=="Cube")
		sum+=6 ;
		else if(st=="Octahedron")
		sum+=8 ;
		else if(st=="Dodecahedron")
		sum+=12 ;
		else if(st=="Icosahedron")
		sum+=20;
	}
	cout<<sum;
    return 0 ;
}