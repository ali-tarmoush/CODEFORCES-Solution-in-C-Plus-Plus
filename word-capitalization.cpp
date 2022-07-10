/*
 * Problem Link   : https://codeforces.com/problemset/problem/281/A
 * Problem Name   : Word Capitalization
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main (){
    string str;
    cin >> str;
    str[0] = towupper(str[0]);
    cout << str << endl;
    return 0 ;
}