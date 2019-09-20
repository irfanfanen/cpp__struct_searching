#include<iostream>
#include<string>
 
using namespace std;

void search(int a, int b, int c, bool d);

typedef struct {
    int nim;
    char nama[100];
}mahasiswa;
 
mahasiswa mhs[100];

int 
    i = 0,
    n,
    x,
    nim
;

char 
    nama[100]
;

bool 
    found = false
;

int main() {

    cout<<"Masukan Jumlah mahasiswa : "; cin>>n; cout<<endl;

    for(int i =0; i<n; i++) {
        cout<<"Mahasiswa ke : "<<i+1; cout<<endl;
        cout<<"Nama : "; cin>>mhs[i].nama; 
        cout<<"NIM : "; cin>>mhs[i].nim; cout<<endl;
    }
 
    cout<<"Cari Berdasarkan NIM : "; cin>>x; cout<<endl;

    search(i, n, x, found); 
}

void search(int i, int n, int x, bool found){
    while ((i<n)&(!found)) {
        if (mhs[i].nim== x) {
            found=true;
        }else{
            i=i+1;
        }
    }

    if(found){
        cout<<"Pencarian : "<<x; cout<<endl;
        cout<<"Nama : "<<mhs[i].nama; cout<<endl;
        cout<<"Nim : "<<mhs[i].nim; cout<<endl;
    }else {
        cout<<"Pencarian : "<<x; cout<<endl;
        cout<<"Tidak ada"; cout<<endl;
    }
}