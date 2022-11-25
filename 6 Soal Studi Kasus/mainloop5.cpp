#include <iostream>

using namespace std;

int main()
{
    cout << "Program Ini Akan Berhenti Jika Menginputkan Angka -99 \n" << endl;
    int x;
    for(int i = 0;;i++){
        cout << "Masukan Nilai : ";
        cin >> x;
        if(x == -99){
            cout << "\n";
            cout << "Keluar Karena Break" << endl;
            break;
        }
    }
    return 0;
}
