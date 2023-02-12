#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

class Biblioteca{
    private:
    vector<string> autore;
    vector<string> libri;
    public:
    Biblioteca(){
        autore.clear();
        libri.clear();
    }
    void leggi(string nomefile){
        fstream f;
        f.open(nomefile,ios::in | ios::out);
        if (f.fail() == true)
        {
            cout << "Impossibile leggere il file" << endl;
        }
        else
        {
            while(f.eof()==false){
                string nome, libro;
                f >> nome >> libro >> ws;
                autore.push_back(nome);
                libri.push_back(libro);
            }
            f.close();
            cout << "Lettura completata" << endl;
        }
    }
    void presente(string titolo){
        bool _presente = false;
        for(int i = 0 ; i < libri.size(); i ++){
            if(libri[i] == titolo){
                _presente = true;
                break;
            }
        }
        if(_presente == false){
            cout<<"Non vi e' alcun libro con tale titolo nella librearia"<<endl;
        }else{
            cout<<"Trovato!"<<endl;
        }
    }
    int libri_scritti(string _autore){
        int conta = 0;
        for(int i = 0 ; i < libri.size(); i ++){
            if(autore[i] == _autore){
                conta ++;
            }
        }
        return conta;
    }
    void acquista(string _autore, string _libro){
        autore.push_back(_autore);
        libri.push_back(_libro);
    }
    void salva(string nomefile){
        fstream f;
        f.open(nomefile, ios::out);
        if (f.fail() == true){ 
            cout << "Impossibile leggere il file" << endl;
        }else{
            for( int i = 0 ; i < libri.size(); i ++){
                f << autore[i] << " " << libri[i]<<endl;
            }
            f.close();
            cout << "Salvataggio completato" << endl;
        }
    }
    friend ostream& operator <<(ostream& os, const Biblioteca& biblioteca){
        os << "La tua libreria:"<<endl;
        for(int i = 0 ; i < biblioteca.autore.size(); i ++){
            os<<"Autore: "<<biblioteca.autore[i]<<" "<<"Opera: "<<biblioteca.libri[i]<<endl;
        }
        return os;
    }
};

int main(){
    bool rimani = true;
    int operazione;
    string titolo, autore;
    cout<<"SIMULATORE BIBLIOTECA"<<endl;
    Biblioteca biblioteca;
    biblioteca.leggi("Libri&Autori.txt");
    while(rimani == true){
        cout<<"Cerca libro (1), Numeri di libri per autore (2), Acquista libro (3), Salva biblioteca (4), Visualizza libreria (5), Termina (6): ";
        cin>>operazione;
        switch(operazione){
            case 1 :
            cout<<"Inserisci il titolo del libro che vuoi cercare: ";
            cin>>titolo;
            biblioteca.presente(titolo);
            break;
            case 2 :
            cout<<"Inserisci il nome dell'autore che del quale vuoi cercare il numero di libri: ";
            cin>>autore;
            cout<<autore<<" ha scritto "<<biblioteca.libri_scritti(autore)<<" libri nella tua libreria"<<endl;
            break;
            case 3 :
            cout<<"Scrivi autore e titolo del libro che vuoi acquistare: ";
            cin>>autore;
            cin>>titolo;
            biblioteca.acquista(autore, titolo);
            break;
            case 4 :
            biblioteca.salva("Libri&Autori.txt");
            break;
            case 5 :
            cout<<biblioteca;
            break;
            case 6 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;

        }
    }

}