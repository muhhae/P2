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
            cout<<"Nama : "; getline(cin, nama);
            cout<<"Stok : "; cin>>stok; cin.ignore();
            cout<<"Harga : "; cin>>harga; cin.ignore();
        }
        void edit()
        {
            while(1)
            {
                system("cls");
                print();
                cout<<"tekan 1 untuk mengubah nama, 2 untuk stok, 3 untuk harga, 4 untuk kembali"<<endl;
                char input = getch();
                system("cls");
                bool quit = false;
                switch (input)
                {
                case '1':
                    cout<<"Nama : "; getline(cin, nama);
                    break;
                case '2':
                    cout<<"Stok : "; cin>>stok; cin.ignore();
                    break;
                case '3':
                    cout<<"Harga : "; cin>>harga; cin.ignore();
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
            cout<<"Nama : "<<nama<<endl;
            cout<<"Stok : "<<stok<<endl;
            cout<<"Harga : "<<harga<<endl;
            cout<<endl;
        }
};

class storage
{
    private :
        vector<barang> m_barang;

    public :
        storage()
        {
            menu();
        }
        void menu()
        {
            while(1)
            {
                system("cls");
                cout<<"Menu\n1. Tampilkan Barang\n2. Tambahkan Barang\n3. Hapus barang\n4. Edit barang\n5. Keluar"<<endl;

                bool quit = false;

                char input = getch();
                system("cls");

                switch (input)
                {
                case '1':
                    outBarang();
                    cout<<"\nTekan sembarang untuk keluar"<<endl;
                    getch();
                    break;
                case '2':
                    add();
                    break;
                case '3':
                    _delete();
                    break;
                case '4':
                    edit();
                    break;
                case '5':
                    quit = true;
                    break;
                
                default:
                    break;
                }
                if(quit) break;
            }
        }

        void outBarang()
        {
            system("cls");
            cout<<"Daftar Barang\n"<<endl;
            for (int i = 0; i < m_barang.size(); i++)
            {
                cout<<"Barang ke-"<<i+1<<endl;
                m_barang[i].print();
            }
        }

        void _delete()
        {
            int index;
            outBarang();
            cout<<"\nIndex barang yang ingin dihapus : "; cin>>index; cin.ignore();
            m_barang.erase(m_barang.begin() + index - 1);
            outBarang();
            cout<<"\nTekan sembarang untuk keluar"<<endl;
            getch();
        }

        void edit()
        {
            outBarang();
            int index;
            cout<<"Index barang yang ingin di ubah : "; cin>>index; cin.ignore();
            m_barang[index - 1].edit();
            outBarang();
            cout<<"\nTekan sembarang untuk keluar"<<endl;
            getch();
        }

        void add()
        {
            m_barang.push_back(barang());
            outBarang();
            cout<<"\nTekan sembarang untuk keluar"<<endl;
            getch();
        }
};

int main()
{
    storage m_storage;
    return 0;
}