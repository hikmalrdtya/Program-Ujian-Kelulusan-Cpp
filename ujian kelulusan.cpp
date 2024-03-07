//Dibuat Oleh Hikmal Raditya
#include <iostream>
using namespace std;

int main()
{
	//tipe data
	float mtk,fisika,pkn;
	char jawab;
	
	//inputan pengguna
	do{
	cout << "------------------------------------------------------------- \n";
	cout << "		Program Nilai Kelulusan \n";
	cout << "------------------------------------------------------------- \n";
	
	cout << "Masukan Nilai Matematika :";
	cin >> mtk;
	
	cout << "Masukan Nilai Fisika :";
	cin >> fisika;
	
	cout << "Masukan Nilai Pkn :";
	cin >> pkn;
	
	//Kondisi
	if(mtk >=75 && fisika >=75 && pkn >=75)
	{
		cout << "Selamat Anda Lulus Semua Mata Pelajaran \n";
		cout << "------------------------------------------------------------- \n";
	}
	else if(mtk < 75 && fisika >=75 && pkn >=75)
	{
		cout << "Anda Gagal Matematika Dan Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}
	else if(mtk >= 75 && fisika < 75 && pkn >=75)
	{
		cout << "Anda Gagal Fisika Dan Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}	
	else if(mtk >= 75 && fisika >= 75 && pkn < 75)
	{
		cout << "Anda Gagal Pkn Dan Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}	
	else if(mtk < 75 && fisika < 75 && pkn >=75)
	{
		cout << "Anda Gagal Fisika Dan Matematika Anda Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}	
	else if(mtk < 75 && fisika >= 75 && pkn < 75)
	{
		cout << "Anda Gagal Pkn Dan Matematika Anda Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}	
	else if(mtk >= 75 && fisika < 75 && pkn < 75)
	{
		cout << "Anda Gagal Fisika Dan Pkn Anda Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}	
	else
	{
		cout << "Anda Gagal Semua Mata Pelajaran Dan Dinyatakan Tidak Lulus\n";
		cout << "------------------------------------------------------------- \n";
	}
		
	//Perulangan	
	cout << "Anda Ingin Mengulang Program ?";
	cin >> jawab;
	}while(jawab == 'y');
	
	return 0;
}
