#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b){
    int g =  max(a,b);
    int s =  std::min(a,b);
    int q = floor (g/s);
    int r = g % s;
    if(r == 0){
        return s;}
    else {
        return find_gcd(s,r);
    }
    return 0;
}
int main() {
    int a,b;
    cin>>a>>b;
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}