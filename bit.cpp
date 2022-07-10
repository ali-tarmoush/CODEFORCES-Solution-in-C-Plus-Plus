/*
 * Problem Link   : https://codeforces.com/problemset/problem/282/A
 * Problem Name   : Bit++
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a=0;
    for (int i=0;i<n;i++){
        string st;
        cin>>st;
        if(st=="++X"||st=="X++")
        a++;
        else if(st=="--X"||st=="X--")
        a--;
    }
    cout<<a;
    return 0 ;
}