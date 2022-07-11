/*
 * Problem Link   : https://codeforces.com/problemset/problem/977/A
 * Problem Name   : Wrong Subtraction
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        if(n%10==0)
            n/=10;
        else
            n--;
    }
    cout<<n;
    return 0;
}