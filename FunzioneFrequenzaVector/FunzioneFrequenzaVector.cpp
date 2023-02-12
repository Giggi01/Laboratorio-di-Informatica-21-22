#include<iostream>
#include<vector>
#include<map>
using namespace std;

void frequenza(){
    int valore;
    int massimafreq=0;
    map<int,int> freq;
    vector<int> a;
    int x;
    int n;
    cout<<"Quanti elementi vuoi? ";
    cin>>n;
    cout<<"Inserisci gli elementi ";
    for(int i=1;i<=n;i++){
        x;
        cin>>x;
        a.push_back(x);
        freq[x]=freq[x]+1;
    }
    for(auto c : freq){
        if(c.second>massimafreq){
            valore=c.first;
            massimafreq=c.second;
        }
    }
    cout<<"Il valore con la massima frequenza e' "<<valore<<" e la sua frequenza ammonta a "<<massimafreq<<endl;
}

int main(){
    frequenza();
}