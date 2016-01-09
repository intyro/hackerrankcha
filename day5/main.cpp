#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T,a,b,N,res;
    cin>>T;
    for(int k = 0 ;k<T;k++){
        cin>>a>>b>>N;
    for ( int i = 0 ; i< N ; i++){
        res = 0;
        for(int j=0;j<=i;j++){
           res = res+ ((pow (2,j) ) * b)  ;
        }
        cout<<a+res<<" ";
    }
        cout<<endl;}

    return 0;
}