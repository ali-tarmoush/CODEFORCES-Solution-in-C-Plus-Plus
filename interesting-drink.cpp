/*
 * Problem Link   : https://codeforces.com/problemset/problem/706/B
 * Problem Name   : Interesting drink
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+5;
int x[MAX];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int m;
        cin>>m;
        cout<< upper_bound(x,x+n, m)-x <<endl;
    }
	return 0;
}