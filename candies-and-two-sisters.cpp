/*
 * Problem Link   : https://codeforces.com/problemset/problem/1335/A
 * Problem Name   : Candies and Two Sisters
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
        int n,a=0;
        cin>>n;
        if(n < 2)
			a=0;
        else if(n % 2 == 0)
			a=n/2-1;
		else
			a=n/2;
        cout<<a<<endl;
     }
    return 0;
}