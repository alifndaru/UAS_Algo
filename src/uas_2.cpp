#include<iostream>
#include<cmath>
#include<sstream>
#include<iomanip>
using namespace std;
struct DataPelajar {
	char NIM[30];
	char Nama[40];
}Pelajar;

struct DataNilai {
	int Nilai_Tugas;
	int Nilai_UTS;
	int Nilai_UAS;
	long double Nilai_Akhir;
}Nilai;

int main()
{
	cout<<" Input Data Pelajar \n";
	cout<<" NIM   : ";cin.getline(Pelajar.NIM,30);
	cout<<" Nama  : ";cin.getline(Pelajar.Nama,40);
	cout<<"\n";
	cout<<" Input Data Nilai \n";
	cout<<" Input Nilai Tugas : ";cin>>Nilai.Nilai_Tugas;
	cout<<" Input Nilai UTS   : ";cin>>Nilai.Nilai_UTS;
	cout<<" Input Nilai UAS   : ";cin>>Nilai.Nilai_UAS;
	
	Nilai.Nilai_Akhir = (Nilai.Nilai_Tugas * 20.0/100.0) + (Nilai.Nilai_UTS * 35.0/100.0) + (Nilai.Nilai_UAS * 45.0/100.0);
	
	cout<<"\n";
	cout<<" Output Data Pelajar \n";
	cout<<" NIM   : "<<Pelajar.NIM<<"\n";
	cout<<" Nama  : "<<Pelajar.Nama<<"\n";
	cout<<"\n";
	cout<<" Output Nilai Pelajar \n";
	cout<<" Nilai Tugas : "<<Nilai.Nilai_Tugas<<"\n";
	cout<<" Nilai UTS   : "<<Nilai.Nilai_UTS<<"\n";
	cout<<" Nilai UAS   : "<<Nilai.Nilai_UAS<<"\n";
	cout<<" Nilai Akhir : "<<Nilai.Nilai_Akhir<<"\n";
	
	if(Nilai.Nilai_Akhir > 85 && Nilai.Nilai_Akhir <= 100)
	{
		cout<<" Nilai Huruf : A ";
	}
	else if(Nilai.Nilai_Akhir > 70 && Nilai.Nilai_Akhir <= 85)
	{
		cout<<" Nilai Huruf : B ";
	}
	else if(Nilai.Nilai_Akhir > 55 && Nilai.Nilai_Akhir <= 70)
	{
		cout<<" Nilai Huruf : C ";
	}
	else if(Nilai.Nilai_Akhir > 40 && Nilai.Nilai_Akhir <= 55)
	{
		cout<<" Nilai Huruf : D ";
	}
	else if(Nilai.Nilai_Akhir > 0 && Nilai.Nilai_Akhir <= 40)
	{
		cout<<" Nilai Huruf : E ";
	}
	
	return 0;
}