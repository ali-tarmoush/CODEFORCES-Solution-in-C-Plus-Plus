/*
 * Problem Link   : https://codeforces.com/problemset/problem/1/A
 * Problem Name   :  Theatre Square
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n,m,a;
	cin>>n>>m>>a;
	cout<<((n+a-1)/a)*((m+a-1)/a);
    return 0 ;
}