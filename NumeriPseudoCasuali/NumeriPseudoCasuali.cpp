#include<iostream>
#include<random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen;
    gen.seed(rd());
    uniform_int_distribution<int> dis(1,1000);
    int numero=dis(gen);
    cout<<"Numero "<<numero<<endl;
   // vector<int> v(100);
    //for(int i=1;i<100;i++){
        //v[i]=dis(gen); 
        //cout<<v[i]<<endl;
   // }
}