#include <iostream>
using namespace std;

void tampilan(int jumlah)
{
    if (jumlah == 0)
        return;
    cout << "* ";
    tampilan(jumlah - 1);
}
 
void segitiga(int n, int i){
    if (n == 0)
        return;
    tampilan(i);
    cout << endl;
    segitiga(n - 1, i + 1);
}
int main()
{
    int n;
    cout<<"---------Membuat Segitiga---------"<<endl;
    cout<<"----------------------------------"<<endl;
    printf("Masukkan jumlah segitiga : ");
    cin>>n;
    segitiga(n, 1);
    return 0;
}