/*
 * Problem Link   : https://codeforces.com/problemset/problem/617/A
 * Problem Name   : Elephant
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin>>x;
	int t=0;
	while(x!=0){
		if(x>=5){
			t++;
			x-=5;
		}
		else if(x>=4){
			t++;
			x-=4;
		}
		else if(x>=3){
			t++;
			x-=3;
		}
		else if(x>=2){
			t++;
			x-=2;
		}
		else{
			t++;
			x--;
		}
	}
	cout<<t;
	return 0;
}