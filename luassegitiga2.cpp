#include <iostream>
using namespace std;

double luasSegitiga(double a, double t) {
	int luas;
	luas = 0.5 *a*t;
	return luas;
};

int main() {
	double a, t;
	cout << "masukkan alas"<<endl;
	cin >> a;
	cout << "masukkan tinggi"<<endl;
	cin >> t;
	cout << "hasilnya adalah " << luasSegitiga(a,t);
	return 0;
}
