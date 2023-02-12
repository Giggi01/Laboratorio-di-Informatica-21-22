#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void divisorivector(int n, vector<int>&v){
    vector<int> vett;
    for(int i=2;i<n;i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
}

void scrivivector(const vector<int>&v){
    for(unsigned int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vett;
    int n;
    cout<<"Inserisci n ";
    cin>>n;
    divisorivector(n,vett);
    cout<<"Il vector con i divisori di "<<n<<" e' ";
    scrivivector(vett);
}