#include "sll.h"

void createList_1301213215(List &L) {
    first(L) = NULL;
}

adr newElement_1301213215(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = prev(P) = NULL;
    return P;
}

void insertLast_1301213215(List &L, adr p) {
    if (first(L) == NULL) {
        first(L) = last(L) = p;
    } else {
        next(last(L)) = p;
        prev(p) = last(L);
        last(L) = p;
    }
    cout << "Press Enter To Continue" << endl;
}

void show_1301213215(List L) {
    if (first(L) != NULL) {
        adr p = first(L);
        while (p != NULL) {
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
    cout << "Press Enter To Continue" << endl;
}

bool isVowel_1301213215(List &L) {
    adr p = first(L);
    return (info(p) == 'a' || info(p) == 'e' || info(p) == 'i' || info(p) == 'o' || info(p) == 'u');
}

void percentage_1301213215(List &L){
    int vowel = 0;
    int consonant = 0;
    int jumlah = 0;
    float persentaseV, persentaseC;

    while( first(L) != NULL){
        if (isVowel_1301213215(L)){
            vowel++;
        }else {
            consonant++;
        }
        first(L) = next(first(L));
        jumlah++;
    }

    persentaseV = (float)vowel/(float)jumlah*100;
    persentaseC = 100-persentaseV;

    cout << "Vowel: " << vowel << endl;
    cout << "Consonant: " << consonant << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "persentase vokal: " << persentaseV << " " << "%" << " " << "persentase konsonan: " << persentaseC << " " << "%" << endl;
    cout << "PRESS ENTER TO CONTINUE....." << endl;
}

void showLastK(List L, int K){
    adr curr = last(L);
    int jumlah = 0;
    while (prev(curr) != NULL){
        jumlah++;
        if (jumlah == K) {
            break;
        }
        curr = prev(curr);
    }
    cout << "Data ke- " << K << " " << "dari belakang adalah : " << info(curr) << endl;
    cout << "PRESS ENTER TO CONTINUE....." << endl;

}
