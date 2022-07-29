/*
 * Problem Link   : https://codeforces.com/problemset/problem/988/B
 * Problem Name   : Substrings Sort
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
const int MAX=150;
string st[MAX];
bool cmp(string s1, string s2){
    if(s1.size() == s2.size())
        return s1 > s2;
   return s1.size() < s2.size();
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>st[i];
    sort(st, st + n, cmp);
    int counter = 0;
    for (int i = 0; i < n - 1; i++){
        int k = st[i + 1].find(st[i]);
        if(k!= -1)
            counter++;
    }
    if(counter == n - 1){
        cout << "YES" <<endl;
        for(int i =0; i < n; i++)
            cout << st[i] << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}

