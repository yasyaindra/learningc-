#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

enum hari {
	senin, selasa, rabu, kamis, jumat, sabtu, minggu
};

int main() {
	 string nama, nim, prodi, fakultas, fakultas2;
	cout<<"nama anda:";
	cin>>nama;
	cout<<"nim anda:";
	cin>>nim;
	cout<<"prodi anda:";
	cin>>prodi;
	cout<<"fakultas anda:";
	cin>>fakultas;
	cin>>fakultas2;
	cout<<"hai, "<<nama<<", nim kamu "<<nim<<". Prodi kamu, "<<prodi<<", "<<fakultas<<" "<<fakultas2;
	getch();
}
