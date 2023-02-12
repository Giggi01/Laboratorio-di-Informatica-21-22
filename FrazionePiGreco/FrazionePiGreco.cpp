#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Fraction
{
    int num;
    int den;
};
Fraction minimopigreco(int dmax)
{
    int den;
    int num;
    double distanza = M_PI*10000000000;
    for (int d = 1; d <= dmax; d++)
    {
        int n = M_PI * d;
        double dis = (abs(M_PI - (n / d)))*10000000000;
        cout<<d<<" "<<n<<" "<<dis<<" "<<distanza<<endl;
        if (dis < distanza)
        {
            den = d;
            num = (int)n;
            distanza = dis;
        }
    }
    Fraction frazione = {num, den};
    return frazione;
}
int main()
{
    int d;
    cout << "Inserisci il numero ";
    cin >> d;
    cout << endl;
    Fraction fraction = minimopigreco(d);
    cout << "La frazione piu vicina al pi greco e' " << fraction.num << "/" << fraction.den;
}