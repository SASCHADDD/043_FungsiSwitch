#include <iostream>
using namespace std;

int bilA; bilB;

void input (bilA , bilB);
{
    cout << "Masukkan nilangan pertama = ";
    cin >> bilA;
    cout << "Masukkan bilangan kedua = ";
    cin >> bilB;
}

int penjumlahan (int a, int b)
{
    return a + b;
}
int pengurangan (int a , int b)
{
    return a - b;
}
int perkalian (int a , int b)
{
    return a * b:
}
float pembagian (float a , float b)
{
    return a / b;
}

int pilihan;
do
{
    cout << "Kalkulator sederhana"<< endl;
    cout << "=====================" << endl;
    cout << "1. penjumlahan" << endl:
    cout << "2. pengurangan" << endl;
    cout << "3. perkalian" << endl:
    cout << "4. pembagian" << endl;
    cout << "5. keluar" << endl;
    cout << "3. ==================" << endl:
    cout << "Masukkan menu pilihan : "
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        input()
        break;
    
    default:
        break;
    }

} while (/* condition */);
