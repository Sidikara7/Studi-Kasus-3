using namespace std;

class Output{
public :
  void cetak(){
    cout <<"SLIP PEMBAYARAN\n";
    cout <<"Makanan yang dibeli : \n";
    cout <<"Ayam Geprek  :"<< data_file[3] << endl;
    cout <<"Ayam Goreng  :"<< data_file[4] << endl;
    cout <<"Udang Goreng :"<< data_file[5] << endl;
    cout <<"Cumi Goreng  :"<< data_file[6] << endl;
    cout <<"Ayam Bakar   :"<< data_file[7] << endl;
    cout <<"Subtotal  Rp. " << data_file[0] << endl;
    cout <<"Ongkir    Rp. " << data_file[1] << endl;
    cout <<"Total     Rp. " << data_file[2] << endl;
    }
  void getData(){
    ambil_data.open("in.put.txt");
    while(!ambil_data.eof()){
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

private :
  ifstream ambil_data;
  string data_file[30];
  int index = 0;
};