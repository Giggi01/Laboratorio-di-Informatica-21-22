 #include<iostream>
 #include<cmath>
 using namespace std;
 
 int main(){
     int n;
     cout<<"Inserisci l'ultimo termine della somma:";
     cin>>n;
     double somma=0;
     for (int i=1;i<=n;i++){
         somma=somma+(1/(pow(i,2)));
     }
     cout<<"Il risultato della sommatoria e':"<<somma<<endl;
     double sommasperimentale=(pow(M_PI,2))/(6);
     cout<<"Il risultato sperimentale e':"<<sommasperimentale<<endl;
 }
