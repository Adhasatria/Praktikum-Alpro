#include <iostream>
using namespace std;

int main(){
    int beras,telur,minyak;
    float pajak= 0.25;
    int total_harga;
    int harga_pajak;
    int nominal_uang;
    int kembalian;

    cout<<"==============================="<<endl;
    cout<<"|    TOKO SEMBAKO JAYA ABADI   | "<<endl;
    cout<<"==============================="<<endl;
    cout<<"[Bina]: Than masukin harga barangnya Rendy di program ini"<<endl;
    cout<<"harga beras (Rp.) :";
    cin>>beras;
    cout<<"harga telur (Rp.) :";
    cin>>telur;
    cout<<"harga minyak (Rp.) :";
    cin>>minyak;

    harga_pajak=pajak*(beras+telur+minyak);
    total_harga=harga_pajak+beras+telur+minyak;
    cout<<"total belanja (+ PPN 25%): "<<total_harga<<endl;

    cout<<"Nominal uang Rendy (Rp.) :";
    cin>>nominal_uang;
    kembalian=nominal_uang-total_harga;

    cout<<"==============================="<<endl;
    cout<<"|       STRUK KEMBALIAN        | "<<endl;
    cout<<"==============================="<<endl;
    cout<<"[Bina]: Nih Than Rincian kemabliannya"<<endl;
    cout<<"total kembalian :"<<kembalian<<endl;
    cout<<"---------------------------------"<<endl;

    cout<<"Rp 100.000"<<"Lembar"<<endl;
    cout<<"Rp 500.000"<<"Lembar"<<endl;
    cout<<"Rp 20.000"<<"Lembar"<<endl;
    cout<<"Rp 10.000"<<"Lembar"<<endl;
    cout<<"Rp 5.000"<<"Lembar"<<endl;
    cout<<"Rp 1.000"<<"Lembar"<<endl;
    cout<<"Rp 500"<<"Koin"<<endl;
    cout<<"Rp 200"<<"Koin"<<endl;
    cout<<"Rp 100"<<"Koin"<<endl;


    

    return 0;
}