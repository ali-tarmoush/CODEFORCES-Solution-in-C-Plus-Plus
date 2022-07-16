/*
 * Problem Link   : https://codeforces.com/problemset/problem/703/A
 * Problem Name   : Mishka and Game
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int mishka=0,chris=0;
    for(int i=0;i<n;i++){
        int m,c;
        cin>>m>>c;
        if (m > c) {
            mishka++;
        } else if(m < c) {
            chris++;
        }
    }
    if (mishka > chris) {
            cout << "Mishka"<<endl;
        } 
        else if (chris > mishka) {
            cout << "Chris"<<endl;
        } 
        else {
            cout << "Friendship is magic!^^"<<endl;
        }
	return 0;
}