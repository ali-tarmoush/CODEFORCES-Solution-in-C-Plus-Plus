/*
 * Problem Link   : https://codeforces.com/problemset/problem/151/A
 * Problem Name   : Soft Drinking
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e2 + 56;
int a[MAX];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>>p>> nl>> np;
    int x=int (k*l)/nl;
    int y=c*d;
    int z=p/np;
    int min=0;
    if(x<y){
        if(x<z)
            min=x;
        else
            min=z;
    }
    else{
        if(y<z)
            min=y;
        else
            min=z;
    }
    cout<<min/n<<endl;
	return 0;
}
 