#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,double> unita_misura = {{"cm",0.01},{"dm",0.1},{"m",1},{"hm",100},{"km",1000}};
    cout<<"Inserisci una distanza ";
    double misura; string unita;
    cin>>misura>>unita;
    double conv = unita_misura [unita];
    if(conv == 0){
        cout<<"Unita non riconosciuta";
    }else{
        cout<<"L'unita corrisponde a "<<misura*conv<<" metri "<<endl;
    }
}