#include <iostream>

using namespace std;

class karyawan
{
    private:
        string nama;
        string jabatan;
        int gaji;
    public:
        void input()
        {
            getline(cin, nama);
            getline(cin, jabatan);
            cin>>gaji; cin.ignore();
        }
        void output()
        {
            cout<<"Nama: "<<nama<<endl;
            cout<<"Jabatan: "<<jabatan<<endl;
            cout<<"Gaji: "<<gaji<<endl;
        }
};

int main()
{
    int n; cin>>n; cin.ignore(); karyawan _karyawan[n];
    for (int i = 0; i < n; i++)
    {
        _karyawan[i].input();
    }
    cout<<"\n\nData karyawan\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Karyawan "<<i+1<<endl;
        _karyawan[i].output(); cout<<endl;
    }
    return 0;
}