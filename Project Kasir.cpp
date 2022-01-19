#include <iostream> // menampilkan cout dan cin
#include <stdio.h> // operasi untuk input dan ouput
#include <conio.h> // perintah buat menampilkan system cls
#include <iomanip> // untuk perintah buat mengatur posisi dengan fungsi setw
#include <fstream> // untuk membaca atau menulis ke file 
#include <string.h> // untuk memproses string di dalam code

using namespace std;

void projectKasir();

int main()
{
	projectKasir();

	system("pause");

	return 0;
}
void projectKasir()
{
	int menu, x, kode[20], jum[20], harga, bayar = 0, totharga[20], uang;
	float pajak;
	long totbayar;
	char nama[20];

	cout << "\t\t\t  seblak aduhay" << endl;
	cout << "\t\t  jalan. pemuda no 15 " << endl;
	cout << "+============================================+" << endl;
	cout << "| Daftar Menu:                               | " << endl;
	cout << "| 1. Seblak Premium               Rp. 18.000 |" << endl;
	cout << "| 2. Seblak Original              Rp. 11.000 |" << endl;
	cout << "| 3. Seblak Siomay                Rp. 10.000 |" << endl;
	cout << "| 4. seblak batagor               Rp.  9.000 |" << endl;
	cout << "| 5. seblak kwetiau               rp.  8.000 |" << endl;
	cout << "+============================================+" << endl;
	cout << endl;
	cout << "+============================================+" << endl;
	cout << "| Toping Seblak:                             |" << endl;
	cout << "| 6. ceker                        rp.  2.000 |" << endl;
	cout << "| 7. Chikuwa                      rp.  2.000 |" << endl;
	cout << "| 8. dumpling keju                rp.  3.000 |" << endl;
	cout << "| 9. jamur enoki                  rp.  3.000 |" << endl;
	cout << "| 10. mozzarella                  rp.  4.000 |" << endl;
	cout << "+============================================+" << endl;
	cout << endl;

	cout << "nama pemesan      : "; cin.getline(nama, sizeof(nama));
	cout << "Banyak pesanan    : "; cin >> menu;

	// memakai perulangan for
	for (x = 1; x <= menu; x++) {
		cout << "---------------------------------" << endl;
		cout << "Pesanan ke-" << x << endl;
		cout << "Pilihan Menu   : "; cin >> kode[x];
		cout << "jumlah         : "; cin >> jum[x];
		cout << endl;
	}

	cout << endl;
	system("CLS"); //clear screen
	cout << "\t\t      Bukti Pemesanan Makanan" << endl;
	cout << "\t\t\t   seblak aduhay" << endl;
	cout << "\t\t    jalan pemuda ambrawa " << endl;
	cout << "===============================================================" << endl;
	cout << "| Nama pemesan :      " << nama << endl;
	cout << "===============================================================" << endl;
	cout << "No.  Nama                    Harga         Jumlah     subtotal " << endl;
	cout << "     Makanan                Makanan        Pesan               " << endl;
	cout << "===============================================================" << endl;

	//proses
	for (x = 1; x <= menu; x++) {
		cout << setiosflags(ios::left) << setw(5) << x; // setiosflags untuk mengatur data rata kiri
		cout << setiosflags(ios::left) << setw(22);
		if (kode[x] == 1) {
			cout << "Seblak premium";
			cout << setw(18) << setiosflags(ios::left);
			harga = 18000;
			cout << "Rp 18.000";
		}
		else if (kode[x] == 2) {
			cout << "seblak original";
			cout << setw(18) << setiosflags(ios::left);
			harga = 11000;
			cout << "Rp 11.000";
		}
		else if (kode[x] == 3) {
			cout << "seblak siomay";
			cout << setw(18) << setiosflags(ios::left);
			harga = 10000;
			cout << "Rp 10.000";
		}
		else if (kode[x] == 4) {
			cout << "seblak batagor";
			cout << setw(18) << setiosflags(ios::left);
			harga = 9000;
			cout << "Rp 9.000";
		}
		else if (kode[x] == 3) {
			cout << "seblak batagor";
			cout << setw(18) << setiosflags(ios::left);
			harga = 9000;
			cout << "Rp 9.000";
		}
		else if (kode[x] == 5) {
			cout << "seblak kwetiau";
			cout << setw(18) << setiosflags(ios::left);
			harga = 8000;
			cout << "Rp 8.000";
		}
		else if (kode[x] == 6) {
			cout << "Ceker";
			cout << setw(18) << setiosflags(ios::left);
			harga = 2000;
			cout << "Rp 2.000";
		}
		else if (kode[x] == 7) {
			cout << "Chikuwa";
			cout << setw(18) << setiosflags(ios::left);
			harga = 2000;
			cout << "Rp 2.000";
		}
		else if (kode[x] == 8) {
			cout << "Dumpling keju";
			cout << setw(18) << setiosflags(ios::left);
			harga = 3000;
			cout << "Rp 3.000";
		}
		else if (kode[x] == 9) {
			cout << "Jamur enoki";
			cout << setw(18) << setiosflags(ios::left);
			harga = 3000;
			cout << "Rp 3.000";
		}
		else if (kode[x] == 10) {
			cout << "seblak batagor";
			cout << setw(18) << setiosflags(ios::left);
			harga = 3000;
			cout << "Rp 3.000";
		}
		else if (kode[x] == 10) {
			cout << "Mozzarella";
			cout << setw(18) << setiosflags(ios::left);
			harga = 4000;
			cout << "Rp 4.000";
		}
		else {
			cout << "Kode tidak tersedia di menu" << endl;
			cout << setw(18) << setiosflags(ios::left);
			harga = 0;
			cout << "Rp 0";
		}
		cout << setiosflags(ios::left) << setw(8) << jum[x];
		totharga[x] = jum[x] * harga;
		cout << "Rp. " << totharga[x] << endl;
		bayar = bayar + totharga[x];
	}
	cout << "---------------------------------------------------------------" << endl;
	cout << endl;
	cout << "Jumlah Bayar  \t: Rp      " << bayar << endl;
	pajak = (bayar * 10) / 100;
	cout << "Pajak(10%)    \t: Rp      " << pajak << endl;
	cout << "---------------------------------------------------------------" << endl;
	totbayar = bayar + pajak;
	cout << "Total bayar   \t: Rp      " << totbayar << endl << endl;
	cout << "======================= Terima Kasih ==========================" << endl;
	cout << "=================== Atas Kunjungan Anda =======================" << endl;

	// membuat file struk
	ofstream seblak("Struk_seblak.txt");
	seblak << "\t\t      Bukti Pemesanan Makanan" << endl;
	seblak << "\t\t\t   seblak aduhay" << endl;
	seblak << "\t\t    jalan pemuda ambrawa " << endl;
	seblak << "===============================================================" << endl;
	seblak << " Nama pemesan :      " << nama << endl;
	seblak << "===============================================================" << endl;
	seblak << "No.  Nama                    Harga         Jumlah     subtotal " << endl;
	seblak << "     Makanan                Makanan        Pesan               " << endl;
	seblak << "===============================================================" << endl;

	//proses
	for (x = 1; x <= menu; x++) {
		seblak << setiosflags(ios::left) << setw(5) << x;
		seblak << setiosflags(ios::left) << setw(22);
		if (kode[x] == 1) {
			seblak << "Seblak premium";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 18000;
			seblak << "Rp 18.000";
		}
		else if (kode[x] == 2) {
			seblak << "seblak original";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 11000;
			seblak << "Rp 11.000";
		}
		else if (kode[x] == 3) {
			seblak << "seblak siomay";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 9000;
			seblak << "Rp 10.000";
		}
		else if (kode[x] == 4) {
			seblak << "seblak batagor";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 9000;
			seblak << "Rp 9.000";
		}
		else if (kode[x] == 3) {
			seblak << "seblak batagor";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 9000;
			seblak << "Rp 9.000";
		}
		else if (kode[x] == 5) {
			seblak << "seblak kwetiau";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 8000;
			seblak << "Rp 8.000";
		}
		else if (kode[x] == 6) {
			seblak << "Ceker";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 2000;
			seblak << "Rp 2.000";
		}
		else if (kode[x] == 7) {
			seblak << "Chikuwa";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 2000;
			seblak << "Rp 2.000";
		}
		else if (kode[x] == 8) {
			seblak << "Dumpling keju";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 3000;
			seblak << "Rp 3.000";
		}
		else if (kode[x] == 9) {
			seblak << "Jamur enoki";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 3000;
			seblak << "Rp 3.000";
		}
		else if (kode[x] == 10) {
			seblak << "seblak batagor";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 3000;
			seblak << "Rp 3.000";
		}
		else if (kode[x] == 10) {
			seblak << "Mozzarella";
			seblak << setw(18) << setiosflags(ios::left);
			harga = 4000;
			seblak << "Rp 4.000";
		}
		else {
			seblak << "Kode tidak tersedia di menu" << endl;
			seblak << setw(18) << setiosflags(ios::left);
			harga = 0;
			seblak << "Rp 0";
		}
		seblak << setiosflags(ios::left) << setw(8) << jum[x];
		totharga[x] = jum[x] * harga;
		seblak << "Rp. " << totharga[x] << endl;
		bayar = bayar + totharga[x];
		uang = bayar / 2;
	}
	seblak << "---------------------------------------------------------------" << endl;
	seblak << endl;
	seblak << "Jumlah Bayar  \t: Rp  " << bayar << endl;
	pajak = (bayar * 10) / 100;
	seblak << "Pajak(10%)    \t: Rp  " << pajak << endl;
	seblak << "---------------------------------------- +" << endl;
	totbayar = bayar + pajak;
	seblak << "Total bayar   \t: Rp " << totbayar << endl << endl;
	seblak << "======================= Terima Kasih ==========================" << endl;
	seblak << "=================== Atas Kunjungan Anda =======================" << endl;
	seblak.close();


}