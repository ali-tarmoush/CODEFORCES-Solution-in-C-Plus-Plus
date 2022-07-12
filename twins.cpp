/*
 * Problem Link   : https://codeforces.com/problemset/problem/160/A
 * Problem Name   : Twins
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=156;
int a[MAX];
int main() {
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a,a+n);
	int sum0=0,t=0;
	for(int i=n-1;i>=0;i--){
		if(sum0>(sum/2))
		break;
		t++;
		sum0+=a[i];
	}
	cout<<t<<endl;
	return 0;
}