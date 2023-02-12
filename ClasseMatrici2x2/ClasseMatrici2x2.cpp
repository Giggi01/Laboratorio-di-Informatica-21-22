#include<iostream>
using namespace std;

class Matrice{
    private:
    double matrice[2][2];
    public:
    Matrice(){
    }
    Matrice(double elemento_1 , double elemento_2, double elemento_3, double elemento_4){
        matrice[0][0] = elemento_1;
        matrice[0][1] = elemento_2;
        matrice[1][0] = elemento_3;
        matrice[1][1] = elemento_4;
    }
    double determinanate(){
        double det = (matrice[0][0]*matrice[1][1])-(matrice[0][1]*matrice[1][0]);
        return det;
    }
    friend Matrice operator + (const Matrice& mat1, const Matrice& mat2){
        Matrice mat3;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mat3.matrice[i][j]=mat1.matrice[i][j]+mat2.matrice[i][j];
            }
        }
        return mat3;
    }
    friend Matrice operator * (const Matrice& mat1, const Matrice& mat2){
        Matrice mat3;
        int k;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mat3.matrice[i][j]=0;
                for(k=0;k<2;k++){
                    mat3.matrice[i][j]+=mat1.matrice[i][j]*mat2.matrice[i][j];
                }
            }
        }
        return mat3;
    }
    friend ostream& operator << (ostream& os, const Matrice mat){
        os << "Matrice : "<< endl;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                os << mat.matrice[i][j]<<" ";
            }
        os << endl;
        }
    return os;
    }  
};

int main(){
    bool rimani = true;
    int operazione;
    double elemento_1 , elemento_2, elemento_3, elemento_4;
    cout<<"Calcolatrice di matrici 2x2"<<endl;
    cout<<"Crea la prima matrice"<<endl;
    cout<<"Inserisci l'elemento della prima righa, prima colonna: ";
    cin>>elemento_1;
    cout<<"Inserisci l'elemento della prima righa, seconda colonna: ";
    cin>>elemento_2;
    cout<<"Inserisci l'elemento della seconda righa, prima colonna: ";
    cin>>elemento_3;
    cout<<"Inserisci l'elemento della seconda righa, seconda colonna: ";
    cin>>elemento_4;
    Matrice _matrice(elemento_1 , elemento_2, elemento_3, elemento_4);
    cout<<"La matrice vale "<<endl;
    cout<<_matrice;
    cout<<"Crea la seconda matrice"<<endl;
    cout<<"Inserisci l'elemento della prima righa, prima colonna: ";
    cin>>elemento_1;
    cout<<"Inserisci l'elemento della prima righa, seconda colonna: ";
    cin>>elemento_2;
    cout<<"Inserisci l'elemento della seconda righa, prima colonna: ";
    cin>>elemento_3;
    cout<<"Inserisci l'elemento della seconda righa, seconda colonna: ";
    cin>>elemento_4;
    Matrice _matrice_2(elemento_1 , elemento_2, elemento_3, elemento_4);
    cout<<"La matrice vale "<<endl;
    cout<<_matrice_2;
    cout<<"Seleziona l'operazione da svolgere"<<endl;
    while(rimani == true){
        cout<<"Determinante (1), Somma (2), Prodotto (3), Termina (4) ";
        cin>>operazione;
        Matrice _matrice_3;
        switch(operazione){
            case 1 :
            cout<<"Il determinante della prima matrice 2x2 vale : "<<_matrice.determinanate()<<endl; 
            cout<<"Il determinante della seconda matrice 2x2 vale : "<<_matrice_2.determinanate()<<endl;      
            break;
            case 2 :
            _matrice_3 = _matrice + _matrice_2;
            cout<<"La somma delle due matrici vale "<<endl;
            cout<<_matrice_3;
            break;
            case 3 :
            _matrice_3 = _matrice * _matrice_2;
            cout<<"La somma delle due matrici vale "<<endl;
            cout<<_matrice_3;
            break;
            case 4:
            rimani = false;
            break;
            default :
            cout<<"Comando non valido"<<endl;
        }
    }
}