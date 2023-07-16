#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100 ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

int cmp_count = 0;
int mov_count = 0;
int n;
//isi disini
void tambahMahasiswa{
	while (true)
	{
	if (jumlahMahasiswa <= MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();

		jumlahMahasiswa++;

		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
	}
node* nodeBaru = new node;
nodeBaru->NIM[MAX_MAHASISWA] = nim;
nodeBaru->nama[MAX_MAHASISWA]= nama;




};

//isi disini
void tampilkanSemuaMahasiswa() {
	if (empty()) {
		cout << "List kosong" << endl;
		return;
	}
	for 
};


//isi disini
void algorithmacariMahasiswaByNIM();
while(())

//isi disini
void algorithmaSortByTahunMasuk();

int main() {
	list mhs;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			mhs.tambahMahasiswa();
			break;
		case 2:
			mhs.tampilkanSemuaMahasiswa();
			break;
		case 3:
			mhs.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			mhs.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}








//2. quickeort, singly list
//3. stack biasanya disebut dengan struktur data LIFO (last in first out) dimana data yang terakhir dimasukkan(push) merupakan data yang pertama yang akan dikeluarkan(pop). dan data itu hanya bisa dihapus dan dimasukkan dari ujung saja disebut top
// sedangkan Queue itu membuat struktur data dengan FIFO( first in first out) dimana elemen paling ujung akhir(rear) dimasukkan dan ujung yang awal(front) yang akan dihapus. Jika rear dan front berada pada -1 maka list nya kosong
//4. stack bisa dipakai ketika ingin melakukan pemanggilan fungsi,lalu saat ingin memastikan the undo list setiap pengaplikasian nya, lalu untuk mengecek penyatuan tanda kurung, dan expression evaluation
//5.a. kedalaman nya 5
// b. 