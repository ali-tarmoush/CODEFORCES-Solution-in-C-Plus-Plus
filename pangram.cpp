/*
 * Problem Link   : https://codeforces.com/problemset/problem/520/A
 * Problem Name   :  Pangram
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char, greater <char> > c;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        c.insert(s[i]);
    }
    if(c.size()==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
