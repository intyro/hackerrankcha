#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
        for (int i = 0 ; i <n ; i++){
			for (int j = i+1 ; j<n ; j++){
            cout<<" "; 
        }
			for (int j = i+1 ; j>0 ; j--){
                cout<<"#";       
        }
            cout<<endl;    
    }
    return 0;
}