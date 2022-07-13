/*
 * Problem Link   : https://codeforces.com/problemset/problem/318/A
 * Problem Name   : Even Odds
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,k;
	cin>>n>>k;
	if(n%2==0){
		if(k>n/2)
		cout<<(k-(n/2))*2;
		else
		cout<<k*2-1;
	}
	else{
		if(k>n/2+1)
		cout<<(k-((n/2)+1))*2;
		else
		cout<<k*2-1;
	}
	return 0;
}