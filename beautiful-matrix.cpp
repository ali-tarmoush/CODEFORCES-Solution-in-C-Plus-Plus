/*
 * Problem Link   : https://codeforces.com/problemset/problem/263/A
 * Problem Name   : Beautiful Matrix
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX = 10 ;
int m[MAX][MAX];
int main (){
    int a=0;
	int b=0;
	for (int i = 1; i<=5; ++i){
		for (int j = 1; j<=5; ++j){
			cin >> m[i][j];
			if (m[i][j] == 1){
				a= i; b= j;
			}
		}
	}
 
	cout << (abs(3 - a) + abs(3 - b));
    return 0 ;
}