/*
 * Problem Link   : https://codeforces.com/problemset/problem/116/A
 * Problem Name   : Tram
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
	cin>>n;
	int a,b,sum=0,max=0,s;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		s=sum-a;
		sum=s+b;
		if(sum>max)
		max=sum;
	}
	cout<<max;
    return 0 ;
}