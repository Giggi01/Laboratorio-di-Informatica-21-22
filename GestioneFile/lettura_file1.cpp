#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream f;
	f.open("tabella2.txt.csv",ios::in);
	if(f.fail()==true)
		cout << "Non si può aprire" << endl;
	else {
		while(f.eof()==false) {
			double x,y;
			f >> x >> y >> ws;
			cout << "x=" << x << " y=" << y << endl;
		}
		f.close();
		cout << "Lettura completata" << endl;
	}
}
