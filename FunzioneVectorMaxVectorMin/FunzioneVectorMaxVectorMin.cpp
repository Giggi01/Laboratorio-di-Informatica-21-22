#include<iostream>
#include<vector>
#include<algorithm>
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

void vectormaxemin(vector<int>&a,int x,vector<int>&b,vector<int>&c){
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(a[i]<x){
            b.push_back(a[i]);
        }else{
            c.push_back(a[i]);
        }
    }
    cout<<"Il vettore con i valori minori di "<<x<<" vale ";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"Il vettore con i valori maggiori di "<<x<<" vale ";
    for(int i=0;i<c.size();i++){
         cout<<c[i]<<" ";
    }
}

int main(){
    int x;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    cout<<"Inserisci x ";
    cin>>x;
    leggivector(a);
    cout<<"Gli elementi del primo vector sono ";
    scrivivector(a);
    vectormaxemin(a,x,b,c);
}
