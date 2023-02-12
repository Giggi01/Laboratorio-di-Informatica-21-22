#include<iostream>
#include<fstream>
#include<vector>
using namespace std; 

int main(){
    fstream f;
    f.open("CreazioneFile/PotenzialeEIntensita",ios::out);
    if(f.fail()==true){
        cout<<"Il file non si puo aprire "<<endl;
    }else{
        vector<double> v1;
        v1.push_back(12);
        v1.push_back(8);
        v1.push_back(9);
        v1.push_back(20);
        v1.push_back(23);
        v1.push_back(12);
        v1.push_back(10);
        v1.push_back(17);
        vector<double> v2;
        v2.push_back(13);
        v2.push_back(10);
        v2.push_back(7);
        v2.push_back(22);
        v2.push_back(20);
        v2.push_back(14);
        v2.push_back(8);
        v2.push_back(15);
        for(int i=0;i<v1.size();i++){
            f << v1[i] <<" "<< v2[i] << endl;
        }
        f.close();
        cout<<"Scrittura completata"<<endl;
    }
}