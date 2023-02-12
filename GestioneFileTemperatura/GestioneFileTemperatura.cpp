#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    fstream f;
    f.open("CreazioneFile/Temperature.txt",ios::out);
    if(f.fail()==true){
        cout<<"Il file non si puo aprire "<<endl;
    }else{
        vector<int> v;
        v.push_back(6);
        v.push_back(9);
        v.push_back(9);
        v.push_back(11);
        v.push_back(7);
        v.push_back(10);
        v.push_back(10);
        //f <<"Le temperature negli ultimi "<<v.size()<<" giorni a Milano sono: "<<endl;
        for(int i=0;i<v.size();i++){
            f << v[i] << endl;
        }
        f.close();
        cout<<"Scrittura completata"<<endl;
    }
}