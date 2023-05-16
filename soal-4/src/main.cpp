#include <include/keuangan.hpp>

using namespace std;

int main()
{
    Keuangan m_keuangan;
    system("cls");
    while(1)
    {
        bool quit = false;
        cout<<"Menu"<<endl;
        cout<<"1. Cek Saldo\n2. Input Pemasukkan\n3. Input Pengeluaran\n4. Daftar Pemasukkan\n5. Daftar Pengeluaran\n6. Keluar"<<endl;
        char input = getch();
        system("cls");
        switch (input)
        {
        case '1':
            m_keuangan.hitungSaldo();
            break;
        case '2':
            m_keuangan.tambahPemasukan();
            break;
        case '3':
            m_keuangan.tambahPengeluaran();
            break;
        case '4':
            m_keuangan.outPemasukan();
            break;
        case '5':
            m_keuangan.outPengeluaran();
            break;
        case '6':
            quit = true;
            break;
        default:
            break;
        }
        if (quit) break;
        cout<<"\nTekan sembarang untuk kembali"<<endl;
        getch();
        system("cls");
    }

    return 0;
}