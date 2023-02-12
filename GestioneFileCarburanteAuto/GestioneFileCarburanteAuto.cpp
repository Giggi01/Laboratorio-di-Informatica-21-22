#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    fstream f;
    f.open("FileCreati/Rifornimenti.txt",ios::out);
    if(f.fail()==true){
        cout<<"Impossibile creare il file"<<endl;
    }else{
        vector<string> vdata;
        vdata.push_back("12/03/21");
        vdata.push_back("5/09/21");
        vdata.push_back("6/12/21");
        vdata.push_back("9/04/21");
        vdata.push_back("1/07/21");
        vector<double> vquantita;
        vquantita.push_back(14);
        vquantita.push_back(5);
        vquantita.push_back(7);
        vquantita.push_back(18);
        vquantita.push_back(22);
        vector<double> vcosto;
        vcosto.push_back(22.4);
        vcosto.push_back(8);
        vcosto.push_back(11.2);
        vcosto.push_back(28.8);
        vcosto.push_back(35.2);
        for(int i=0;i<vdata.size();i++){
            f << vdata[i] <<" "<< vquantita[i] <<" "<< vcosto[i] <<endl;
        }
        f.close();
        cout<<"Scrittura completata"<<endl;
    }
}