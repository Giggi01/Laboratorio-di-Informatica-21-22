#include<iostream>
#include<random>
#include<vector>
#include<cmath>
using namespace std;



int main(){
    vector <double> angoli_i = {10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0, 60.0, 65.0, 70.0, 75.0, 80.0, 85.0};
    vector <double> angoli_t = {7.1, 10.6, 14.1, 17.5, 20.9, 24.1, 27.3, 30.0, 33.2, 35.8, 38.1, 40.3, 42.1, 43.6, 44.6, 45.3};
    vector <double> theta_i;
    vector <double> theta_t;
    for (int i = 0; i < angoli_i.size(); i++){
        double radianti = angoli_i[i]*M_PI/(180.0);
        theta_i.push_back(radianti);
        double radianti_2 = angoli_t[i]*M_PI/(180.0);
        theta_t.push_back(radianti_2);
    }
    //for(int i = 0; i < theta_i.size(); i ++){
        //cout<<theta_i[i]<<" ";
    //}
    //cout<<endl;
    //for(int i = 0; i < theta_i.size(); i ++){
        //cout<<theta_t[i]<<" ";
    //}
    //cout<<"t_p"<<endl;
    //for(int i = 0; i < theta_i.size(); i ++){
        //double t_p = (2.0*1.0*cos(theta_i[i]))/(1.402*cos(theta_i[i])+1.0*cos(theta_t[i]));
        //cout<<t_p<<endl;
    //}
    vector <double> t_s = {0.8289, 0.8242, 0.8173, 0.8079, 0.7961, 0.7805, 0.7615, 0.7361, 0.7079, 0.6706, 0.6237, 0.5665, 0.4949, 0.4063, 0.2963, 0.1624};
    vector <double> t_p = {0.8299, 0.8266, 0.8216, 0.8149, 0.8062, 0.7948, 0.7806, 0.7614, 0.7397, 0.7102, 0.6721, 0.6237, 0.5600, 0.4762, 0.3635, 0.2111};
    cout << "T_p" << endl;
    for( int i = 0; i < t_p.size() ; i ++){
        double T = (((1.402*cos(theta_t[i]))/(1.0*cos(theta_i[i])))*pow(t_p[i],2))*100.0;
        cout << T << endl;
    }
    cout<<"T_luce_ord"<<endl;
    vector <double> T_s = {97.06, 96.91, 96.66, 96.29, 95.85, 95.17, 94.31, 93.04, 91.46, 89.15, 85.83, 81.20, 74.49, 64.76, 50.47, 29.84};
    vector <double> T_p = {97.30, 97.48, 97.68, 97.97, 98.30, 98.69, 99.10, 99.54, 99.86, 99.99, 99.67, 98.42, 95.38, 88.95, 75.96, 50.42};
    vector <double> R_p = {2.68, 2.52, 2.31, 2.03, 1.70, 1.31, 0.89, 0.46, 0.14, 0.0018, 0.33, 1.58, 4.62, 11.05, 24.05, 49.56};
    vector <double> R_s = {2.93, 3.09, 3.34, 3.69, 4.16, 4.82, 5.69, 6.96, 8.53, 10.85, 14.16, 18.78, 25.51, 35.25, 49.50, 70.16};
    for (int i = 0; i < R_s.size();i ++){
        double T_luce_ord = (T_s[i] + T_p[i])/2;
        cout << T_luce_ord << endl;
    }
}