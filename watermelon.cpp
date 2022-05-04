/*
 * Problem Link   : https://codeforces.com/problemset/problem/4/A
 * Problem Name   : Watermelon
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
#include<bits/stdc++.h>
using namespace std;
int main (){
    int w ;
    cin >> w;
    ((w-2)%2== 0 && (w-2)!=0) ?cout << "yes" :cout << "no" ;
    return 0 ;
}