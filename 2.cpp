#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

class barang
{
    private :
        string nama;
        int stok;
        int harga;
    
    public :
        barang()
        {
            input();
        }
        void input()
        {
            cout<<"Nama : "; cin.ignore(); getline(cin, nama);
            cout<<"Stok : "; cin>>stok;
            cout<<"Harga : "; cin>>harga;
        }
        void edit()
        {
            print();
            while(1)
            {
                system("cls");
                cout<<"tekan 1 untuk mengubah nama, 2 untuk stok, 3 untuk harga, 4 untuk kembali"<<endl;
                char input = getch();
                system("cls");
                bool quit = false;
                switch (input)
                {
                case '1':
                    cout<<"Nama : "; cin.ignore(); getline(cin, nama);
                    break;
                case '2':
                    cout<<"Stok : "; cin>>stok;
                    break;
                case '3':
                    cout<<"Harga : "; cin>>harga;
                    break;
                case '4':
                    quit = true;
                    break;
                
                default:
                    break;
                }
                if(quit) break;
            }
        }
        void print()
        {
            cout<<"Nama : "<<nama;
            cout<<"Stok : "<<stok;
            cout<<"Harga : "<<harga;
        }
};

int main()
{
    return 0;
}