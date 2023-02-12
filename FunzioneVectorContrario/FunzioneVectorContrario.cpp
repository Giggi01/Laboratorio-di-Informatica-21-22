#include <iostream>
#include <vector>
using namespace std;

void leggivector(vector<int> &a)
{
    int n;
    cout << "Quanti elementi vuoi? ";
    cin >> n;
    cout << "Inserisci gli elementi ";
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
}

void scrivivector(const vector<int> &a)
{
    for (unsigned int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void vectorcontrario(vector<int> &a, vector<int> &b)
{
    for (int i = a.size() - 1; i >= 0; i--)
    {
        b.push_back(a[i]);
    }

    /*
    for (unsigned int i = a.size(); i > 0; i--)
    {
        b.push_back(a[i - 1]);
    }
    */
}

int main()
{
    vector<int> a;
    vector<int> b;
    leggivector(a);
    cout << "I valori del primo vector sono ";
    scrivivector(a);
    cout << "Il vector invertito e' ";
    vectorcontrario(a, b);
    scrivivector(b);
}