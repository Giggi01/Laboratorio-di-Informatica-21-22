#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
	fstream f;
    vector<string> libro = {"Attacco_dei_Giganti", "Le_bizzarre_avventure_di_Jojo", "Dragonball", "Naruto", "Ciliegie_Rosse", "Le_mattine_di_Febbraio"};
    vector<string> autore = {"Hajime_Isayama", "Hirohiko_Araki", "Akira_Toriyama", "Masashi_Kishimoto", "Paolo_Rossi", "Paolo_Rossi"};
	f.open("Libri&Autori.txt",ios::out);
	if(f.fail()==true)
		cout << "Non si può aprire" << endl;
	else {
        for(int i = 0 ; i < libro.size(); i ++){
            f<<autore[i]<<" "<<libro[i]<<endl;
        }
        f.close();
        cout<<"Scrittura completata"<<endl;
	}
}