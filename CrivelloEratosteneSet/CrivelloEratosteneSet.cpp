#include<iostream>
#include<set>
using namespace std;

bool primo(int n){
    bool pr=true;
    for(int j=2;j<=n/2;j++){
        if(n%j==0){
            pr=false;
            break;
        }
    }
    return pr;
}

int main(){
    int n;
    set<int> s;
    cout<<"Inserisci n ";
    cin>>n;
    cout<<endl;
    cout<<"I numeri primi fino a "<<n<<" sono: "<<endl;
    for(int num=2;num<=n;num++){
        if (primo(num)==true){
            s.insert(num);
        }
    }
    int conta=0;
    for(int x:s){
        cout<<x<<" ";
        conta++;
        if(conta%10==0){
            cout<<endl;
        }
    }
}