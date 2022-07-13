/*
 * Problem Link   : https://codeforces.com/problemset/problem/479/A
 * Problem Name   : Expression
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int t1 = a + b*c;
	int t2 = a*(b + c);
	int t3 = a*b*c;
	int t4 = (a + b)*c;
	int t5 = a + b + c;
	int i = 0;
	int max = t1;
	while (i<5){
		if (t1>max)
			max = t1;
		else if (t2 > max)
			max = t2;
		else if (t3> max)
			max = t3;	
		else if (t4 > max)
			max = t4;
		else if (t5> max)
			max = t5;
		i++;
	}
	cout << max <<endl;
	return 0;
}