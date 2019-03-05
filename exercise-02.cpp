#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

int main(){
    Theater bioskop;
    bioskop.room=7;
    strcpy(bioskop.seat, "J9");
    strcpy(bioskop.movieTitle, "Adit&Jarwo");
    cout<<bioskop.room<<endl;
    cout<<bioskop.seat<<endl;
    cout<<bioskop.movieTitle<<endl;
}