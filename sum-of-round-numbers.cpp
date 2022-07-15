/*
 * Problem Link   : https://codeforces.com/problemset/problem/1352/A
 * Problem Name   : Sum of Round Numbers
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
vector<int>v;
void printVector(vector<int>vec){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a;
        cin>>n;
        int cou=1;
        while(n!=0){
            if(n%10!=0){
                v.push_back((n%10)*cou);
                cou*=10;
            }
            else
                cou*=10;
            n/=10;
        }
        printVector(v);
        v.clear();
    }
    return 0;
}