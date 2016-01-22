#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string getBaseTwo ( int num , string s){
    if(num == 0)
        return s;
    else {
        if(num%2==0){
            s = "0" + s;
        }
        else{
            s = "1" +s;
        }
        return getBaseTwo(floor(num/2),s);
    }
}

int main() {
    int n ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
    int num;
    string s = "";
    cin>>num;
    cout<<getBaseTwo(num,s)<<endl;
    }
    return 0;
}