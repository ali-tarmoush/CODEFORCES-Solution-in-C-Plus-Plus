/*
 * Problem Link   : https://codeforces.com/problemset/problem/617/A
 * Problem Name   : Elephant
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin >> x;
	int t = 0;
	while (x>0){
		if (x>=5){
			x -= 5;
			t++;
		}
		else if (x>=4){
			x -= 4;
			t++;
		}
		else if (x >= 3){
			x -= 3;
			t++;
		}
		else if (x >= 2){
			x -= 2;
			t++;
		}
		else if (x >= 1){
			x -= 1;
			t++;
		}
	}
	cout << t;
	return 0;
}
 