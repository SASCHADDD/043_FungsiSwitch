#include <iostream>
using namespace std;

int bilA; int bilB;

void input ()
{
    cout << "Masukkan bilangan pertama = ";
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
    return a * b;
}
int pembagian (float a , int b)
{
    return a / b;
}
int main(){
int pilihan;
do
{
    cout << "Kalkulator sederhana"<< endl;
    cout << "=====================" << endl;
    cout << "1. penjumlahan" << endl;
    cout << "2. pengurangan" << endl;
    cout << "3. perkalian" << endl;
    cout << "4. pembagian" << endl;
    cout << "5. keluar" << endl;
    cout << "3. ==================" << endl;
    cout << "Masukkan menu pilihan : ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        input();
        cout << "Hasil penjumlahan = " << penjumlahan (bilA,bilB) << endl;
        break;
    case 2:
        input();
        cout << "Hasil pengurangan = " << pengurangan (bilA,bilB) << endl;
        break;
    case 3:
        input();
        cout << "Hasil perkalian = " << perkalian (bilA,bilB) << endl;
        break;
    case 4:
        input();
        cout <<"Hasil pembagian = " << pembagian (bilA,bilB) << endl;
        break;
    case 5:
        break;
    
    default:
        cout << "Pilihan Anda salah" << endl;
        break;
    }

    system("pause");
    system("CLS");

} while (pilihan !=5);
}