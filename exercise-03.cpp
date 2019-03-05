/**
* Author    : Asep Budiyana Muharam
* NPM       : 140810180029
* Deskripsi : exercise-03
* Tahun     : 2019
*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Pegawai{
    int nip;
    char nama[20];
    int gol;
    int gaji;
};
typedef Pegawai larik[10];

void inputPegawai(larik& pgw, int n){
    for (int i=0;i<n;i++){
        cout<<"Pegawai ke-"<<i+1<<endl;
        cout<<"NIP  : ";cin>>pgw[i].nip;
        cout<<"Nama : ";cin>>pgw[i].nama;
        cout<<"Gol  : ";cin>>pgw[i].gol;
    }
    cout<<endl;
}
void cetakDaftar(larik& pgw, int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (pgw[j].nip>pgw[j+1].nip&&j!=n-1){
                swap(pgw[j],pgw[j+1]);
            }
        }
    }
    cout<<"Daftar Pegawai"<<endl;
    for (int i=0;i<n;i++){
        cout<<"No."<<i+1<<" "<<pgw[i].nip<<" "<<pgw[i].nama<<" "<<pgw[i].gol<<endl;
    }
}
void cariGaji(larik& pgw,int n){
    for (int i=0;i<n;i++){
        if (pgw[i].gol==1) pgw[i].gaji=2000000;
        else if (pgw[i].gol==2) pgw[i].gaji=3000000;
        else if (pgw[i].gol==3) pgw[i].gaji=5000000;
        else pgw[i].gaji=8000000;
    }
}
void rataGaji(larik& pgw,int n){
    int jumlah=0;
    for (int i=0;i<n;i++){
        jumlah+=pgw[i].gaji;
    }
    cout<<"rata-rata Gaji = "<<jumlah/n<<endl;
}
void gajiTerendah(larik& pgw, int n){
    int minimal=pgw[n-1].gaji;
    for (int i=0;i<n;i++){
        if(pgw[i].gaji<pgw[i+1].gaji&&i!=n-1){
            minimal=pgw[i].gaji;
        }
    }
    cout<<"gaji Terendah = "<<minimal<<endl;
}
void gajiTertinggi(larik& pgw, int n){
    int maksimal=pgw[n-1].gaji;
    for (int i=0;i<n;i++){
        if(pgw[i].gaji>pgw[i+1].gaji&&i!=n-1){
            maksimal=pgw[i].gaji;
        }
    }
    cout<<"gaji Tertinggi = "<<maksimal<<endl;
}

int main(){
    larik pgw;
    int n;
    cout<<"Jumlah Pegawai = ";cin>>n;
    inputPegawai(pgw,n);
    cetakDaftar(pgw,n);
    cariGaji(pgw,n);
    rataGaji(pgw,n);
    gajiTerendah(pgw,n);
    gajiTertinggi(pgw,n);
}
