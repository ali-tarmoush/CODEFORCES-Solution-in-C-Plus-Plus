/*
 * Problem Link   : https://codeforces.com/problemset/problem/996/A
 * Problem Name   : Hit the Lottery
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int t=0;
	while(n!=0){
	if(n>=100){
		n-=100;
		t++;
	}
	else if(n>=20){
		n-=20;
		t++;
	}	
	else if(n>=10){
		n-=10;
		t++;
	}
	else if(n>=5){
		n-=5;
		t++;
	}
	else{
		n--;
		t++;
	}
	}
	cout<<t;
	return 0;
}