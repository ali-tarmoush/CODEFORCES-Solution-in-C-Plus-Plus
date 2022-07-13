/*
 * Problem Link   : https://codeforces.com/problemset/problem/344/A
 * Problem Name   : Magnets
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,t=1;
	cin>>n;
	string st1,st2;
	cin>>st1;
	for(int i=1;i<n;i++){
		st2=st1;
		cin>>st1;
		if(st2!=st1)
			t++;		
	}
	cout<<t<<endl;
    return 0 ;
}