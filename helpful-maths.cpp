/*
 * Problem Link   : https://codeforces.com/problemset/problem/339/A
 * Problem Name   : Helpful Maths
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 56;
int m[MAX];
int main (){
    string st;
	cin >> st;
	int t= 0;
	for (int i = 0; i < st.size(); i++)
	if (st[i] != '+'){
		m[t] =st[i];
		t++;
	}
	for (int i = 0; i < t; i++)
		for (int j = 0; j < t - 1; j++)
		if (m[j]>m[j + 1]){
			int swap = m[j];
			m[j] = m[j + 1];
			m[j + 1] = swap;
		}
	for (int i = 0; i < t; i++){
		if (m[i] == 49)
			cout << 1;
		else if (m[i] == 50)
			cout << 2;
		else if (m[i] == 51)
			cout << 3;
		if (i != t- 1)
			cout << "+";
	}
    return 0 ;
}