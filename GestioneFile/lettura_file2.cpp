#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	fstream f;
	f.open("tabella2.txt.csv",ios::in);
	if(f.fail()==true)
		cout << "Non si può aprire" << endl;
	else {
		vector<double> vx,vy;
		while(f.eof()==false) {
			double x,y;
			f >> x >> y >> ws;
			vx.push_back(x);
			vy.push_back(y);
		}
		f.close();
		cout << "Lettura completata" << endl;
		cout << "vx ha dim. " << vx.size() << endl;
		cout << "vy ha dim. " << vy.size() << endl;
	}
}
