#include <iostream>
using namespace std;

int main(){
	int tempF, tempC;
	string desc;
	
	cout<<"Maskkan Temperatur Farenheit : ";
	cin>>tempF;
	
	tempC = 5.0/9 * (tempF - 32);
	
	if(tempC > 300){
		desc = "Panas";
	}else if(tempC < 250){
		desc = "Dingin";
	}else{
		desc = "Normal";
	}
	
	cout<<"Suhu Farenheit : "<<tempF<<endl;
	cout<<"Suhu Celcius : "<<tempC<<endl;
	cout<<"Deskripsi : Suhu "<<desc<<endl;
	
	return 0;
}