#include <iostream>
using namespace std;

class Mobil
{
public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void input_data()
    {
        cout << "Masukan nama mobil =";
        cin >> nama_mobil;
        cout << "Masukan tipe mobil =";
        cin >> tipe_mobil;
        cout << "Masukan harga mobil =";
        cin >> harga_mobil;
    }
    void output_data()
    {
        cout << "Harga mobil =" << harga_mobil << endl;
    }
};
