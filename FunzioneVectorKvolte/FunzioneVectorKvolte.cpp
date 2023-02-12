#include<iostream>
#include<vector>
using namespace std;

void leggivector (vector<int>&v){
    int n;
    cout<<"Quanti elementi vuoi? ";
    cin>>n;
    cout<<"Inserisci gli elementi ";
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}

void scrivivector(const vector<int>&v){
    for(unsigned int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void kvector(int k,vector<int>&v,vector<int>&w){
    int b=0;
    while(b!=k){
        for(int i=0;i<v.size();i++){
            w.push_back(v[i]);
        }
        b++;
    }
    for(unsigned int i=0;i<w.size();i++){
        cout<<w[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int k;
    vector<int>v;
    vector<int>w;
    cout<<"Inserisci k ";
    cin>>k;
    leggivector(v);
    cout<<"il vector vale ";
    scrivivector(v);
    cout<<"Il nuovo vector vale ";
    kvector(k,v,w);
    
}