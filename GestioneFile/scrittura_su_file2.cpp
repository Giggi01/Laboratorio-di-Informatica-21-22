#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
	fstream f;
	f.open("FileCreati/radici_quadrate.txt",ios::out);
	if(f.fail()==true)
		cout << "Non si può aprire" << endl;
	else {
		for(int i=1; i<=20; i++)
			f << i << " " << sqrt(i) << endl;
		f.close();
		cout << "Scrittura completata" << endl;
	}
}
