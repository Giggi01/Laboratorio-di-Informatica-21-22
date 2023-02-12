#include <iostream>
#include <fstream>

using namespace std;

int main() {
	fstream f;
	f.open("FileCreati/numeri2.txt",ios::out | ios::app);
	if(f.fail()==true)
		cout << "Non si può aprire" << endl;
	else {
		for(int i=16; i<=25; i++)
			f << i << endl;
		f.close();
		cout << "Scrittura completata" << endl;
	}
}
