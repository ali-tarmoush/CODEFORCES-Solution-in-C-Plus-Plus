/*
 * Problem Link   : https://codeforces.com/problemset/problem/1560/A
 * Problem Name   : Dislike of Threes
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
const int MAX=1001;
int a[MAX];
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int j = 1;
    for(int i = 1 ; i <= 1666 ; i++ ){
        if(i%3 != 0 && i%10 != 3){
            a[j] = i;
            j = j + 1;
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        cout<<a[k]<<endl;
    }
	return 0;
}