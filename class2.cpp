#include <iostream>
using namespace std;

class persegi_panjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void input_data()
    {
        cout << "Masukan panjang =";
        cin >> panjang;
        cout << "Masukan lebar =";
        cin >> lebar;
    }
    void output_data()
    {
        cout << "Tampilkan luas =" << luas << endl;
    }
    void hitung_luas()
    {
        luas = panjang * lebar;
    }
};
