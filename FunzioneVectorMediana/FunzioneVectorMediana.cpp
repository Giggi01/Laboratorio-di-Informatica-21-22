#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void leggivector (vector<double>&a){
    int n;
    cout<<"Quanti elementi vuoi? ";
    cin>>n;
    cout<<"Inserisci gli elementi ";
    for(int i=1;i<=n;i++){
        double x;
        cin>>x;
        a.push_back(x);
    }
}

void scrivivector(const vector<double>&a){
    for(unsigned int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

double mediana(vector<double>&a){
    double med;
    sort(a.begin(),a.end());
    if(a.size()%2==0){
        med=(a[a.size()/2]+a[(a.size()/2)-1])*0.5;
    }else{
        med=a[(a.size()-1)/2];
    }
    return med;
}

int main(){
    vector<double> a;
    leggivector(a);
    cout<<"Gli elementi del primo vector sono ";
    scrivivector(a);
    cout<<"La mediana del vector e' "<<mediana(a);
    //cout<<(a.size()-1)/2;
}