#include<iostream>
using namespace std;

int main(){
    string filetto[3][3];
    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0; j < 3; j++ ){
            filetto[i][j] = "_";
        }
    }
    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0; j < 3; j++ ){
            cout<< filetto[i][j] <<" ";
        }
        cout<<endl;
    }
}
        