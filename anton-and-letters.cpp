/*
 * Problem Link   : https://codeforces.com/problemset/problem/443/A
 * Problem Name   :  Anton and Letters
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
set <char, greater <char> > s;
int main(){
    char ch;
    cin>>ch;
    while(ch!='}'){
        cin>>ch;
        if(ch!='{'&& ch!='}'&& ch!=',')
            s.insert(ch);
    }
    cout<<s.size();
    return 0;
}