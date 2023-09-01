#include <iostream>
using namespace std;

int main(){
	int bilangan, total, ribu, ratus, puluh, satu;
	string jml;
	
	cout<<"Masukkan bilangan : ";
	cin>>bilangan;
	
	jml = to_string(bilangan);
	jml = jml.substr(jml.length() - 4);
	total = stoi(jml);
	ribu = (total - (total % 1000)) / 1000;
	ratus = ((total % 1000) - ((total % 1000) % 100)) / 100;
	puluh = (((total % 1000) % 100) - (((total % 1000) % 100) % 10)) / 10;
	satu = ((total % 1000) % 100) % 10;
	
	cout<<ribu<<" Ribuan ";
	cout<<ratus<<" Ratusan ";
	cout<<puluh<<" Puluhan ";
	cout<<satu<<" Satuan.";
	
	return 0;
}