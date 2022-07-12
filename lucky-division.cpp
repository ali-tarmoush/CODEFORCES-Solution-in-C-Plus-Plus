/*
 * Problem Link   : https://codeforces.com/problemset/problem/122/A
 * Problem Name   : Lucky Division
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int a[12]={4,7,47,74,44,444,447,474,477,777,774,744};
int main() {
    int n;
    cin>>n;
    bool P=0;
    for(int i=0;i<12;i++){
        if(n%a[i]==0){
            P=1;
        }
    }
    if(P)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}