/*
 * Problem Link   : https://codeforces.com/problemset/problem/71/A
 * Problem Name   : Way Too Long Words
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
	cin >> n;
	string st;
	for (int i = 0; i < n; i++){
		cin >> st;
		if (st.size() <= 10)
			cout << st<<endl;
		else
		{
			int t = st.size();
			cout << st[0] << t - 2 << st[t-1]<<endl;
		}
	}
    return 0 ;
}