#include<iostream>
#include<vector>
using namespace std;

void leggivector (vector<int>&a){
    int n;
    cout<<"Quanti elementi vuoi? ";
    cin>>n;
    cout<<"Inserisci gli elementi ";
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
}

void scrivivector(const vector<int>&a){
    for(unsigned int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void vectorunito(vector<int>&a,vector<int>&b,vector<int>&c){
    for(unsigned int i=0;i<a.size();i++){
        c.push_back(a[i]);
    }
    for(unsigned int i=0;i<b.size();i++){
        c.push_back(b[i]);
    }
}

int main(){
    vector<int>a;
    vector<int>b;
    vector<int>c;
    leggivector(a);
    cout<<"I valori del primo vector sono ";
    scrivivector(a);
    leggivector(b);
    cout<<"I valori del secondo vector sono ";
    scrivivector(b);
    vectorunito(a,b,c);
    cout<<"Il terzo vector vale ";
    scrivivector(c);
}