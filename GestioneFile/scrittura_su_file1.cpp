#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream f;
	f.open("FileCreati/numeri.txt",ios::out);
	if(f.fail()==true)
		cout << "Non si può aprire" << endl;
	else {
		for(int i=1; i<=15; i++)
			f << i << endl;
		f.close();
		cout << "Scrittura completata" << endl;
	}
}
