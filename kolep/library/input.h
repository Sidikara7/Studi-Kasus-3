using namespace std;

class Input {
public:
  void cetak() {
    cout << "Aplikasi Penjualan Makanan \n";
    cout << "Menu yang tersedia : \n";
    cout << "1) Ayam geprek Rp. 21000 \n";
    cout << "2) Ayam goreng Rp. 17000 \n";
    cout << "3) Udang goreng Rp. 19000 \n";
    cout << "4) Cumi goreng Rp. 20000 \n";
    cout << "5) Ayam bakar Rp. 25000 \n";
    cout<<"Pesan Ayam geprek  : "; cin >> AyamxGeprek;
    cout<<"Pesan Ayam goreng  : "; cin >> AyamxGoreng;
    cout<<"Pesan Udang goreng : "; cin >> UdangxGoreng;
    cout<<"Pesan Cumi goreng  : "; cin >> CumixGoreng;
    cout<<"Pesan Ayam bakar   : "; cin >> AyamxBakar;
    cout<<"Jarak rumah anda   : "; cin >>jarak;
    
  }
  void toFile() {
    tulis_data.open("in.put.txt");
    tulis_data << AyamxGeprek << endl;
    tulis_data << AyamxGoreng << endl;
    tulis_data << UdangxGoreng << endl;
    tulis_data << CumixGoreng << endl;
    tulis_data << AyamxBakar << endl;
    tulis_data << jarak;
    tulis_data.close();
  }

private:
  ofstream tulis_data;
  int AyamxGeprek, AyamxGoreng, UdangxGoreng, CumixGoreng, AyamxBakar,jarak;
};