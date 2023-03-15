#include <iostream>
 
using namespace std;
 
int main()
{
    float a, b, c, d, e,f, g; 
    /* Menggunakan variabel float sebab int tidak bisa menggunakan angka desimal 
    sedangkan pada operator pembagian sering dijumpai hasil desimal */

    cout << "Masukkan nilai a: ";
    cin >> a;

    cout << "Masukkan nilai b: ";
    cin >> b;

    c= a + b; //operator penjumlahan
    d= a - b; //operator pengurangan
    e= a * b; //operator perkalian
    f= a / b; //operator pembagian

    cout << "Hasil Operator Penjumlahan = " << c << endl;
    cout << "Hasil Operator Pengurangan = " << d << endl;
    cout << "Hasil Operator Perkalian   = " << e << endl;
    cout << "Hasil Operator Pembagian   = " << f << endl;
    
}