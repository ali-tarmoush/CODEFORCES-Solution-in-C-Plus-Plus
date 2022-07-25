/*
 * Problem Link   : https://codeforces.com/problemset/problem/750/A
 * Problem Name   : New Year and Hurry
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,sum=0;
    cin>>n>>k;
    int ct=240-k;
    for(int i=1;i<=n;i++){
        int pt=5*i;
        if(pt<=ct){
            ct-=pt;
            sum++;
        }
        else
            break;
    }
    cout<<sum<<endl;
    return 0;
}
