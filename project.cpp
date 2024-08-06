#include <iostream>
using namespace std;

int main() {
    // Aplikasi SPBU berbasis program
    cout<<"|-----------------------------------------------------------------------------|"<<endl;
    cout<<"|                              GasGas STATION                                 |"<<endl;
    cout<<"|-----------------------------------------------------------------------------|"<<endl;
	cout<<endl;
	
    string menu[4] = {"Premium", "Pertalite", "Pertamax", "Dexlite"}; // menu pada GasGas STATION
    cout<<"GasGas STATION : "<<endl;
    cout<<"Hello Guys.....:v"<<endl;
	
	cout<<endl;
    for (int i = 0; i < 4; i++) { // perulangan untuk menampilkan Array dalam pelayanan SPBU 
        cout<< i + 1 << " ."<<menu[i]<<endl;
    }

    string namalengkap;
    int usia;
    string status;
    int bayar ;
    int kembalian ;
    int pembayaran ;
    int pilihan, harga , liter, total ;
    bool kondisi; //kondisi menyatakan situasi pada sistem
	
	cout<<endl;
	
	cout<<"|-----------------------------------------------------------------------------|"<<endl;
    cout<<"| Silahkan masukkan biodata pembelian :                                       |"<<endl; // memasukkan biodata pembelian GasGas 
    cout<<"| Nama Pelanggan      :";
    getline(cin, namalengkap);
    cout<<"| Usia Pelanggan      :";
    cin>>usia;
	cout<<"|-----------------------------------------------------------------------------|"<<endl;
	
	cout<<endl;
	cout<<"|-----------------------------------------------------------------------------|"<<endl;
    cout<<"| Pilihan Layanan GasGas :                                                    |"<<endl;
    cout<<"| Pilihan          :";
    cin>>pilihan;
    cout<<"|-----------------------------------------------------------------------------|"<<endl;


	//ini adalah untuk kondisi pemilihan produk dan harga
    if (pilihan == 1) {
        status = "Premium";
        cout<<"Pilihan Anda adalah = "<<menu[0]<<endl;
        harga = 15000;
    } else if (pilihan == 2) {
        status = "Pertalite";
        cout<<"Pilihan Anda adalah = "<<menu[1]<<endl;
        harga = 12000;
    } else if (pilihan == 3) {
        status = "Pertamax";
        cout<<"Pilihan Anda adalah = "<<menu[2]<<endl;
        harga = 11000;
    } else if (pilihan == 4) {
        status = "Dexlite";
        cout<<"Pilihan Anda adalah = "<<menu[3]<<endl;
        harga = 10000;
    } else {
        cout<<"Pilihan tidak valid"<<endl;
    }
	
	
    cout<<"Harga per Liter	: Rp. "<<harga<<endl;
    
    cout<<endl;
    cout<<"Masukkan jumlah liter: ";
    cin>>liter;
	
	cout<<endl;
    if (liter > 0) {
        total = liter * harga;
        cout<<"Harga Total         = Rp. "<<total<<endl;
    } else {
        cout<<"Jumlah liter tidak valid"<<endl; //Jumlah liter tidak valid karena ada kesalahan input data beli 
    }
    
    while(true) {
	    cout<<endl;
	    cout<<"Pembayaran Produk : "<<endl;
	    cout<<"Silahkan Bayar	 : ";
	    cin>>bayar;
	    
	    if(bayar >= total) break;
	}
	
	kembalian = bayar - total;
	
	cout<<endl;
    //cetak kembali struk pembayran 
	cout<<"|------------------------------------------------------------------------------------------|"<<endl;
	cout<<"|                                       GasGas STATION                                     |"<<endl;
	cout<<"|------------------------------------------------------------------------------------------|"<<endl;
	
	cout<<endl;
	cout<<"Struk Pembelian Produk : "<<endl;            //cetak kembali struk pembelian produk berupa keluaran
	cout<<"Nama Pelanggan		: "<<namalengkap<<endl;
	cout<<"Usia Pelanggan		: "<<usia<<" tahun"<<endl;
	cout<<"Produk Pembelian	: "<<pilihan<<" jenis "<<status<<endl;
	cout<<"Satuan Liter		: "<<"Rp. "<<harga<<endl;
	cout<<"Total 			: "<<"Rp. "<<total<<endl;
	cout<<"Kembalian		: "<<"Rp. "<<kembalian<<endl;
	cout<<endl;		
	
	cout<<"----------------------------TERIMA KASIH ATAS KUNJUNGAN ANDA-------------------------------|"<<endl;
	//program sudah selesai. 
	//terima kasih atas kunjungan anda 
	
    return 0;
}
