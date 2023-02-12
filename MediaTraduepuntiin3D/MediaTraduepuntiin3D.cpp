#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<double> punto_1 = {3.2, 2.4, 5.6};
    vector<double> punto_2 = {4, 6.7, 8.3};
    vector<double> punto_3;
    for(int i = 0 ; i < punto_1.size() ; i ++ ){
        double media_coordinata;
        media_coordinata = (punto_1[i] + punto_2[i])/2.0;
        punto_3.push_back(media_coordinata);
    }
    cout << "Le coordinate del terzo punto sono: ";
    for(int i = 0 ; i < punto_3.size() ; i ++ ){
        cout << punto_3[i] << " ";
    }
}
