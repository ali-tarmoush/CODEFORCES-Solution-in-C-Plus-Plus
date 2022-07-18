/*
 * Problem Link   : https://codeforces.com/problemset/problem/791/A
 * Problem Name   : Bear and Big Brother
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
    int a, b;
	cin >> a >> b;
	for (int i = 1; i <= 20; i++){
		a *= 3;
		b *= 2;
		if (a>b){
			cout << i;
			break;
		}
	}
    return 0 ;
}