#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> freq;
    cout<<"Inserisci delle parole, scivi . per finire ";
    string x;
    cin>>x;
    while(x!="."){
        freq[x]=freq[x]+1;
        cin>>x;
    }
    cout<<"frequenze ";
    for(auto c : freq){
        cout<<"valore "<<c.first<<" con frequenza "<<c.second<<endl;
    }
}
