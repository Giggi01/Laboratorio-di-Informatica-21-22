#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,n;
    cout<<"Inserisci il numero ";
    cin>>x;
    cout<<endl;
    cout<<"Inserisci l'ultimo termine della successione ";
    cin>>n;
    cout<<endl;
    double serie;
    if(n==1){
        serie=x;
    }else{
        double u=x;
        for(int i=0;i<=n;i++){
            serie=0.5*((u+x)/u);
            u=serie;
        }
    }
    cout<<"La radice di "<<x<<" sviluppata sino al termine "<<n<<" vale "<<serie<<endl;
}
