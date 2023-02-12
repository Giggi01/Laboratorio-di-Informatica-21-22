#include<iostream>
#include<random>
#include<vector>
using namespace std;

mt19937 gen;

//double probabilitakdadi(int dim, int num_dadi){
    //uniform_int_distribution<int> dado(1,6);
    //double successi=0;
   // double lanci=0;
    //for(int i=0;i<num_dadi;i++){
        //vector<double> i;
   // }
//}
int main(){
    int seed;
    int num_dadi;
    int dim;
    cout<<"Genera un seed: ";
    cin>>seed;
    gen.seed(seed);
    cout<<"quanti dadi vuoi lanciare? ";
    cin>>num_dadi;
    for(int i=0;i<num_dadi;i++){
        vector<double> i;
        cout<<i<<endl;
    }
    cout<<"Quante volte vuoi lanciare i 3 dadi? ";
    cin>>dim;
}