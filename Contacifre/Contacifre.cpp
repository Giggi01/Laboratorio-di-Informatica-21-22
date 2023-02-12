#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Inserisci il numero ";
    cin>>n;
    cout<<endl;
    int ncifre=log10(n)+1;
    cout<<"Il numero "<<n<<" ha "<<ncifre<<" cifre"<<endl;
}