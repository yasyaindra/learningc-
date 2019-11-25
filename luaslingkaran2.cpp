#include <iostream>
using namespace std;

double luasLingkaran (double r) {
	int luas;
	double phi = 3.14;
	luas = phi * r * r;
	return luas;
}

int main() {
	int r;
	cout << "masukkan jari jari";
	cin >> r;
	cout <<"hasilnya adalah" << luasLingkaran(r);
}
