/*
Nama    : Asep Budiyana Muharam
NPM     : 140810180029
Kelas   : A
Tanggal : 05/03/2019
*/

#include <iostream>
using namespace std;

void moveZeroToEnd(int arr[],int n){
    for (int i=0;i<n;i++){
        if (arr[i]==0&&i!=n-1){
            swap(arr[i],arr[i+1]);
        }
    }
}
void input(int (&arr)[100],int& n){
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void output(int arr[],int n){
    for (int i=0;i<n;i++){
        if (i!=0) cout<<",";
        cout<<arr[i];
    }
}

int main(){
    int arr[100];
    int n;
    cout<<"Masukan panjang data : ";cin>>n;
    cout<<"Masukan data cth[1 2 3 4 5] : ";
    input(arr,n);
    moveZeroToEnd(arr,n);
    cout<<"Hasil : ";
    output(arr,n);
}
