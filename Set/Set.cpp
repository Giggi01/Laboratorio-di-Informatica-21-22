#include<iostream>
#include<set>
using namespace std;

void scriviset(set<int>&s){
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    set<int> s;
    s.insert(4);
    s.insert(3);
    s.insert(11);
    s.insert(18);
    cout<<"Prima ";
    scriviset(s);
    s.erase(4);
    cout<<"Dopo ";
    scriviset(s);
}