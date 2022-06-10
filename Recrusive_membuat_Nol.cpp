#include<iostream>
using namespace std;
int nol(int angka)
{
static int hitungan=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitungan++;

        nol(angka/10);
    }
    return hitungan;
}
int main()
{
    int n;
    cout<<"---------Menghitung Jumlah Angka Nol---------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Masukkan angka :";
    cin>>n;
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"Banyak angka nol : "<<nol(n);
}
