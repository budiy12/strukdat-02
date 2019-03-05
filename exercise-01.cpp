/**
* Author    : Asep Budiyana Muharam
* NPM       : 140810180029
* Deskripsi : exercise-01
* Tahun     : 2019
*/


#include <iostream>
#include <string.h>
using namespace std;

struct Orang {
int umur;
char nama[30];
char jk;
char goldar;
};

int main() {
Orang orang;
orang.umur = 10;
strcpy(orang.nama, "fahmi");
orang.jk = 'L';
orang.goldar = 'O';
cout << orang.umur << endl;
cout << orang.nama << endl;
cout << orang.goldar << endl;
cout << orang.jk << endl;
}
