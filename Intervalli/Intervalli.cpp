#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, x;
	int n,i,j;
	j = 1;
	cout << " Inserisci a e b con b > a: "<<endl;
	cin >> a >> b;
	cout << " Inserisci n: ";
	cin >> n;
	if (a < b) {
		for (i = 1; i <= n+1; i++) {
			if (i == 1) {
				x = a;
				cout << x << "\t" << x * x << endl;

			}
			else if (i == n+1) {
				x = b;
				cout << x << "\t" << x * x << endl;

			}
			else {
				x = a+j*((b - a) / n);
				cout << x << " \t " << x * x << endl;
				j = j + 1;
			}

		}
	 }
	else {
		cout << " b deve essere maggiore di a ";
	}

}