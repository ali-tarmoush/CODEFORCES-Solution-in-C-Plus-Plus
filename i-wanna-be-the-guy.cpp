/*
 * Problem Link   : https://codeforces.com/problemset/problem/469/A
 * Problem Name   : I Wanna Be the Guy
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int, greater <int> > s;
    int n,p,q,a;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a;
        s.insert(a);
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a;
        s.insert(a);
    }
    if( s.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
 
}