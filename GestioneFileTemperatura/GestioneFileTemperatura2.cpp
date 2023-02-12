#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    fstream f;
    f.open("CreazioneFile/Temperature.txt",ios::in);
    if(f.fail()==true){
        cout<<"Il file non puo essere letto"<<endl;
    }else{
        vector<int> v;
        while(f.eof()==false){
            int a;
            f >> a >> ws;
            v.push_back(a);
        }
        f.close();
        int minima=2147483647;
        int massima=-2147483647;
        int somma=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<minima){
                minima=v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]>massima){
                massima=v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            somma=somma+v[i];
        }
        int media=somma/v.size();
        cout<<"La media delle "<<v.size()<<" temperaure a Milano e' "<<media<<", la massima e' "<<massima<<" e la minima e' "<<minima<<endl;
    }
}