#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    std::map<string,int> phonebook;
    int n;
    cin>>n;
    string name;
    for (int i=0;i<n;i++){
        cin.ignore(); std::getline( cin, name ); 
        int number;
        cin>>number;
        phonebook[name]=number;
    }
    cin.ignore();
    while(getline(std::cin, name)){
       if (phonebook.count(name))
            cout<<name<<"="<<phonebook[name]<<endl;
        else
            cout<<"Not found"<<endl; 
    }

    return 0;
}