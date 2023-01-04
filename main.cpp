#include <iostream>
#include "sll.h"

using namespace std;

int main()
{
    List L;
    adr p;
    int input;
    infotype x;

    createList_1301213215(L);

    while(1)
    {
        system("cls");
        cout << "\n             menu                ";
        cout << "\n===================================";
        cout << "\n 1.Menambahkan N data baru ";
        cout << "\n 2.Menampilkan semua data ";
        cout << "\n 3.Menampilkan persentase huruf yokal ";
        cout << "\n 4.Menampilkan data ke-k terakhir ";
        cout << "\n 5.Keluar ";
        cout << "\n\n Masukan Pilihan (1-5): ";
        cin >> input;
        cout << "\n=================================";
        cout << "\n";
        switch(input)
        {
            case 1:
                cout<< "Masukan Data: ";
                cin >> x;
                p = newElement_1301213215(x);
                insertLast_1301213215(L,p);
                getch();
                break;
            case 2:
                show_1301213215(L);
                getch();
                break;
            case 3:
                percentage_1301213215(L);
                getch();
                break;
            case 4:
                int k;
                cin >> k;
                showLastK(L,k);
                getch();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout << "Input salah, silahkan input ulang!(press any key)";
                getch();
                break;
        }
    }
    return 0;
}
