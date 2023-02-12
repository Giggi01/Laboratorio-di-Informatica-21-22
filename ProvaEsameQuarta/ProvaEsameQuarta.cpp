#include<iostream>
using namespace std;

class Filetto{
    private:
    string filetto[3][3];
    public:
    Filetto(){
        //Filetto vuoto
        for(int i = 0 ; i < 3 ; i ++){
            for(int j = 0 ; j < 3; j++ ){
                filetto[i][j] = " ";
            }
        }
    }
    void crocetta(int x, int y){
        if(filetto[x][y]==" "){
            filetto[x][y] = "X";
        }else{
            cout<<"La casella e' gia occupata"<<endl;
        }
    }
    void pallino(int x , int y){
        if(filetto[x][y]==" "){
            filetto[x][y] = "O";
        }else{
            cout<<"La casella e' gia occupata"<<endl;
        }
    }
    friend ostream& operator<<( ostream& os, const Filetto& _filetto){
        os << "Situazione corrente del filetto: "<<endl;
        for(int i = 0 ; i < 3; i++){
            for( int j = 0 ; j < 3; j++){
                os << _filetto.filetto[i][j]<<" ";
            }
            os << endl;
        }
        return os;
    }
    int controllo(){
        int vittoria = 0 ;
        if(filetto[0][0] == "X" && filetto[0][1] == "X" && filetto[0][2] == "X"){
            vittoria = 1;
        }else{
            if(filetto[0][0] == "O" && filetto[0][1] == "O" && filetto[0][2] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[1][0] == "X" && filetto[1][1] == "X" && filetto[1][2] == "X"){
            vittoria = 1;
        }else{
            if(filetto[1][0] == "O" && filetto[1][1] == "O" && filetto[1][2] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[2][0] == "X" && filetto[2][1] == "X" && filetto[2][2] == "X"){
            vittoria = 1;
        }else{
            if(filetto[2][0] == "O" && filetto[2][1] == "O" && filetto[2][2] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[0][0] == "X" && filetto[1][0] == "X" && filetto[2][0] == "X"){
            vittoria = 1;
        }else{
            if(filetto[0][0] == "O" && filetto[1][0] == "O" && filetto[2][0] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[0][1] == "X" && filetto[1][1] == "X" && filetto[2][1] == "X"){
            vittoria = 1;
        }else{
            if(filetto[0][1] == "O" && filetto[1][1] == "O" && filetto[2][1] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[0][2] == "X" && filetto[1][2] == "X" && filetto[2][2] == "X"){
            vittoria = 1;
        }else{
            if(filetto[0][2] == "O" && filetto[1][2] == "O" && filetto[2][2] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[0][0] == "X" && filetto[1][1] == "X" && filetto[2][2] == "X"){
            vittoria = 1;
        }else{
            if(filetto[0][0] == "O" && filetto[1][1] == "O" && filetto[2][2] == "O"){
                vittoria = 2;
            }
        }
        if(filetto[0][2] == "X" && filetto[1][1] == "X" && filetto[2][0] == "X"){
            vittoria = 1;
        }else{
            if(filetto[0][2] == "O" && filetto[0][0] == "O" && filetto[2][0] == "O"){
                vittoria = 2;
            }
        }
        return vittoria;
    }
};

int main(){
    int opzione;
    int x, y;
    bool rimani = true;
    int conta_turno = 1;
    Filetto _filetto;
    cout<<"SIMULATORE PARTITA DI TRIS"<<endl;
    cout<<"Alla x spetta il primo turno, al O il secondo e cosi via"<<endl;
    while(rimani == true){
        cout<<"Metti X (1), Metti O (2), Visualizza la situazione di gioco (3), Controlla Vittoria (4), Termina (5): ";
        cin>>opzione;
        switch(opzione){
            case 1 :
            if(conta_turno % 2 != 0){
                cout<<"Inserisci le coordinate della casella nella quale vuoi inserire la X"<<endl;
                cout<<"X: ";
                cin>>x;
                if(x >= 3 || x < 0){
                    cout<<"Questa coordinata non esiste"<<endl;    
                }else{
                    cout<<"Y: ";
                    cin>>y;
                    if(y >= 3 || y < 0 ){
                        cout<<"Questa coordinata non esiste"<<endl;
                    }else{
                        conta_turno ++;
                        _filetto.crocetta(x,y);
                    }
                }            
            }else{
                cout<<"Non e' il tuo turno!"<<endl;
            }
            break;
            case 2 :
            if(conta_turno % 2 == 0){
                cout<<"Inserisci le coordinate della casella nella quale vuoi inserire il O"<<endl;
                cout<<"X: ";
                cin>>x;
                if(x >= 3 || x < 0){
                    cout<<"Questa coordinata non esiste"<<endl;    
                }else{
                    cout<<"Y: ";
                    cin>>y;
                    if(y >= 3 || y < 0 ){
                        cout<<"Questa coordinata non esiste"<<endl;
                    }else{
                        conta_turno ++;
                        _filetto.pallino(x,y);
                    }
                }            
            }else{
                cout<<"Non e' il tuo turno!"<<endl;
            }
            break;
            case 3 :
            cout << _filetto;
            break;
            case 4 :
            _filetto.controllo();
            if(_filetto.controllo() == 0){
                cout<<"Non ha vinto ancora nessuno"<<endl;
            }else{
                if(_filetto.controllo() == 1){
                    cout<<"Ha vinto la X!"<<endl;
                }else{
                    cout<<"Ha vinto il O!"<<endl;
                }
            }
            break;
            case 5 :
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}