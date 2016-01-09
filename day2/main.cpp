#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float M,res;
    int T,X;
    cin>>M>>T>>X;
    res = ((M*T)/100)+M;
    res =res+((X*M)/100);
    cout<<"The final price of the meal is $"<< round(res)<<".";
    return 0;
}