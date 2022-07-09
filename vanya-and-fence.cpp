/*
 * Problem Link   : https://codeforces.com/problemset/problem/677/A
 * Problem Name   : Vanya and Fence
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,h;
	cin>>n>>h;
	int a,sum=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a>h)
		sum+=2;
		else
		sum++;
	}
	cout<<sum;
    return 0 ;
}