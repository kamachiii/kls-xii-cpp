#include <iostream>
using namespace std;

int main(){
	int berat, harga_barang, harga_awal, diskon, harga_akhir;
	
	cout<<"Masukkan berat buah : ";
	cin>>berat;
	
	harga_barang = 5; // memang dari LKPD disuruh 5/gram
	
	harga_awal = harga_barang * berat;
	
	diskon = 0.05 * harga_awal; // pelanggan mendapat diskon
	
	harga_akhir = harga_awal - diskon;
	
	cout<<"Harga awal : "<<harga_awal<<endl;
	cout<<"Diskon : "<<diskon<<endl;
	cout<<"Harga akhir : "<<harga_akhir<<endl;
	
	return 0;
}