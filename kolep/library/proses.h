using namespace std;

class Proses {
  public :
    void cetak(){
      cout << "Ini Proses \n";
    }

    void getData(){
      ambil_data.open("in.put.txt");
      bool ayam_geprek = true;
      bool ayam_goreng = true;
      bool udang_goreng = true;
      bool cumi_goreng = true;
      bool ayam_bakar = true;
      bool jarak = true;
      while(!ambil_data.eof()){
        if (ayam_geprek){
          ambil_data >> AyamxGeprek;
          ayam_geprek = false;
        }
        if (ayam_goreng){
          ambil_data >> AyamxGoreng;
          ayam_goreng = false;
        }
        if (udang_goreng){
          ambil_data >> UdangxGoreng;
          udang_goreng = false;
        }
        if (cumi_goreng){
          ambil_data >> CumixGoreng;
          cumi_goreng = false;
        }
        if (ayam_bakar){
          ambil_data >> AyamxBakar;
          ayam_bakar = false;
        }
        if (jarak1){
          ambil_data >> jarak;
          jarak1 = false;
        }
        
      }
      ambil_data.close();
    }

    void toFile(){
      int subtotal = (hrg_aymgprk * AyamxGeprek ) + (hrg_aymgrng *AyamxGoreng ) + (hrg_udggrng * UdangxGoreng) + (hrg_cmigrng * CumixGoreng) + (hrg_aymgbkr * AyamxBakar);

      int batas = 3;
      int total = int (subtotal);
      int ongkir = 15000;

      if(jarak1 > batas){
        ongkir = ongkir + 10000;
        total = subtotal + ongkir;
      }
      else{ 
        total = subtotal + ongkir;
      }
      
      tulis_data.open("in.put.txt");
      tulis_data << subtotal << endl;
      tulis_data << ongkir << endl;
      tulis_data << total << endl;
      tulis_data << AyamxGeprek << endl;
      tulis_data << AyamxGoreng << endl;
      tulis_data << UdangxGoreng << endl;
      tulis_data << CumixGoreng << endl;
      tulis_data << AyamxBakar;
      tulis_data.close();
      
    }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int hrg_aymgprk = 21000;
    int hrg_aymgrng = 17000;
    int hrg_udggrng = 19000;
    int hrg_cmigrng = 20000;
    int hrg_aymgbkr = 25000;
    int AyamxGeprek, AyamxGoreng, UdangxGoreng, CumixGoreng, AyamxBakar,jarak,total,ongkir,jarak1;
};