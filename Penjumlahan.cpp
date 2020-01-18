// Penjumlahan Polinom

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int derajat1, derajat2;

    // Input Polinom 1
    cout<<"Masukkan derajat polinom pertama: ";
    cin >>derajat1;
    int i=derajat1;
    int A[i], k1;
    for (i=derajat1-1; i>=0; i--){
        cout<<"Masukkan koefisien x^"<<i+1<<": ";
        cin >>A[i];
    }
    cout<<"Masukkan konstanta: ";
    cin >>k1;
    cout<<endl;

    // Input Polinom 2
    cout<<"Masukkan derajat polinom kedua: ";
    cin >>derajat2;
    int j=derajat2;
    int B[j], k2;
    for (j=derajat2-1; j>=0; j--){
        cout<<"Masukkan koefisien x^"<<j+1<<": ";
        cin >>B[j];
    }
    cout<<"Masukkan konstanta: ";
    cin >>k2;
    cout<<endl;

    // Algoritma
    int pGede, pKecil;
    if (derajat1 >= derajat2) {
        pGede = derajat1;
        pKecil = derajat2;
    }
    else {
        pGede = derajat2;
        pKecil = derajat1;
    }
    int Jumlah[pGede];
    int k = pGede;
    for (k = pGede; k > pKecil; k--){
        if (derajat1 >= derajat2){
            Jumlah[k] = A[k];
        }
        else {
            Jumlah[k] = B[k];
        }
    }
    for (k = pKecil; k >= 0; k--){
        Jumlah[k] = A[k] + B[k];
    }


    for (k=derajat1-1; k>=0; k--){
        cout<<Jumlah[k]<<"x^"<<k+1<<" + ";
    }
    cout<<k1+k2;

    return 0;
}
