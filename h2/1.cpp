#include <iostream>
using namespace std;

int main(){
	string nama;
	int gaji_pokok, tunj, pjk, gaji_bersih;
	
	cout<<"Masukkan nama karyawan : ";
	cin>>nama;
	
	cout<<"Masukkan gaji pokok : Rp.";
	cin>>gaji_pokok;
	
	tunj = 0.2 * gaji_pokok;
	pjk = 0.15 * (gaji_pokok + tunj);
	gaji_bersih = gaji_pokok + tunj - pjk;
	
	cout<<"Nama karyawan : "<<nama<<endl;
	cout<<"Gaji pokok : Rp."<<gaji_pokok<<endl;
	cout<<"Tunjangan : Rp."<<tunj<<endl;
	cout<<"Pajak : Rp."<<pjk<<endl;
	cout<<"Gaji bersih : Rp."<<gaji_bersih<<endl;
	
	return 0;
}