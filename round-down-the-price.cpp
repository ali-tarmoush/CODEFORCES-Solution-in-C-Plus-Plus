/*
 * Problem Link   : https://codeforces.com/problemset/problem/1702/A
 * Problem Name   : Round Down the Price
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

 #include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unsigned long int m;
        cin>>m;
        ostringstream s;
        s<<m;
        string str = s.str();
        unsigned long int n=str.length()-1;
        unsigned long int x=m-pow(10,n);
        cout<<x<<endl;
    }
    return 0 ;
}