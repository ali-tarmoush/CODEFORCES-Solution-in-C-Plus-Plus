/*
 * Problem Link   : https://codeforces.com/problemset/problem/112/A
 * Problem Name   : Petya and Strings
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
        s1[i]=tolower(s1[i]);
    for(int i=0;i<s2.size();i++)
        s2[i]=tolower(s2[i]);
    if(s1>s2)
        cout<<1;
    else if(s1<s2)
        cout<<-1;
    else if(s1==s2)
        cout<<0;
    return 0 ;
}