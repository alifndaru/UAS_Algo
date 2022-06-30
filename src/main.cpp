#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
		
struct Mahasiswa{
string nim;
string namaMhs;
float absenNilai;
float nilaiTugas;
float uts;
float uas;
float NA;
}mhs[4];
for(int i = 1; i<=3; i++){
	cout << endl;
	cout << "Data ke - " << i << endl;
	cout << "Masukkan Nim : ";
	cin >> mhs[i].nim;
	cout << "Masukkan Nama Mahasiswa : ";
  cin.ignore();
	getline(cin,mhs[i].namaMhs,'\n');
  cout << "Masukan Nilai Absensi : ";
  cin >> mhs[i].absenNilai;
	cout << "Masukkan Nilai Tugas : ";
	cin  >> mhs[i].nilaiTugas;
	cout << "Masukkan Nilai UTS : ";
	cin >> mhs[i].uts;
	cout << "Masukkan Nilai UAS : ";
	cin >> mhs[i].uas;
}
cout << endl;
cout << "\t\t\t\tDaftar Nilai UAS Mahasiswa Sistem Informasi \t\t" << endl;
cout << "=======================================================================================================" << endl;cout << "|Nim|\t\t  |Nama Mhs|\t\t    |Absensi|\t    |Tugas|\t  |Uts|\t  |Uas|\t  |Akhir|\t  |Grade|" << endl;
cout << "=======================================================================================================" << endl;

for(int a = 1; a<=3; a++){
  mhs[a].NA = ((mhs[a].absenNilai*0.1)+(mhs[a].nilaiTugas * 0.2) + (mhs[a].uts * 0.3) + (mhs[a].uas * 0.4));
 	// cout << setiosflags(ios::left) << setw (4) << a ;
 	cout <<"|"<< setiosflags(ios::left) << setw (20) << mhs[a].nim;
 	cout <<"|"<< setiosflags(ios::left) << setw (30) << mhs[a].namaMhs;
  cout <<"|"<< setiosflags(ios::left) << setw (13) << mhs[a].absenNilai;
 	cout <<"|"<< setiosflags(ios::left) << setw (13) << mhs[a].nilaiTugas;
 	cout <<"|"<< setiosflags(ios::left) << setw (10) << mhs[a].uts;
 	cout <<"|"<< setiosflags(ios::left) << setw (9) << mhs[a].uas;
 	cout <<"|"<< setiosflags(ios::left) << setw (10) << mhs[a].NA;

  if (mhs[a].NA >= 80 && mhs[a].NA <= 100)
  {
     	cout <<"|"<< setiosflags(ios::left) << setw (10) << "A";
  }else if (mhs[a].NA >= 70 && mhs[a].NA <= 79)
  {
    cout <<"|"<< setiosflags(ios::left) << setw (10) << "B+";
  }else if (mhs[a].NA >= 60 && mhs[a].NA <= 69)
  {
    cout <<"|"<< setiosflags(ios::left) << setw (10) << "B";
  }else if (mhs[a].NA >= 50 && mhs[a].NA <= 59)
  {
    cout <<"|"<< setiosflags(ios::left) << setw (10) << "C+";
  }else if (mhs[a].NA >= 40 && mhs[a].NA <= 49)
  {
    cout <<"|"<< setiosflags(ios::left) << setw (10) << "C";
  }else if (mhs[a].NA >= 30 && mhs[a].NA <= 29)
  {
    cout <<"|"<< setiosflags(ios::left) << setw (10) << "D";
  }else if (mhs[a].NA > 0 && mhs[a].NA <= 29)
  {
    cout <<"|"<< setiosflags(ios::left) << setw (10) << "E";
  }
  
 	cout << endl;
}

cout <<"=========================================================================================================";
return 0;
}