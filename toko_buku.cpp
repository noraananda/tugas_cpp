#include<iostream>
using namespace std;

int main()
{
	char pilih,jenis,total;
	
    cout<<"           daftar buku  "<<endl;
    cout<<"========================================"<<endl;
    cout<<"||           Nama novel               ||"<<endl;
    cout<<"========================================"<<endl;
    cout<<"1. Laut bercerita"<<endl;
    cout<<"2. Amba"<<endl;
    cout<<"3. Tenggelamnya kapan van der wijck"<<endl;
    cout<<"4. Bumi cinta"<<endl;
    cout<<"========================================"<<endl;
    cout<<"||masukkan daftar nama buku=";
    cin>>pilih;
     cout<<"========================================"<<endl;
    switch(pilih)
    {
    	case'1':
    		cout<<"1. jenis buku novel"<<endl;
    		cout<<" Nama novel = Laut bercerita"<<endl;
    		cout<<" Penulis = Leila.S chudori"<<endl;
    		cout<<" jumlah halaman = 379"<<endl;
    		cout<<" harga buku = RP. 109.000"<<endl;
    		break;
    	case '2':
    		cout<<"2. jenis buku novel "<<endl;
    		cout<<"************************"<<endl;
    		cout<<" Nama novel = Amba"<<endl;
    		cout<<" penulis = Laksmi pamuntjak"<<endl;
    		cout<<" jumlah halaman = 360"<<endl;
    		cout<<" harga buku = RP. 100.000"<<endl;
    		break;
    	case '3':
    		cout<<"3. jenis buku novel "<<endl;
    		cout<<"************************"<<endl;
    		cout<<" Nama novel = Tenggelamnya kapal van der wijck"<<endl;
    		cout<<" penulis = H. Abdul malik karim"<<endl;
    		cout<<" jumlah halaman = 264"<<endl;
    		cout<<" harga buku = RP. 152.000"<<endl;
    		break;
    	case '4':
    		cout<<"4. jenis buku novel "<<endl;
    		cout<<"************************"<<endl;
    		cout<<" Nama novel = Bumi cinta"<<endl;
    		cout<<" penulis = Habiburrahman El shirazy"<<endl;
    		cout<<" jumlah halaman = 546"<<endl;
    		cout<<" harga buku = RP. 107"<<endl;
    		break;
        case'5':
        	cout<<"5. jenis buku novel "<<endl;
        	cout<<" buku novel tidak tersedia "<<endl;
        	break;
	
   int nama_buku1,nama_buku2,total;
   char operasi;
   cout<<" buku 1=";
   cin>>nama_buku1;
   cout<<" buku 2=";
   cin>>nama_buku2;
   cout<<" operator (+) =";
   cin>>operasi;
   cout<<" hasil=";
   if(operasi =='+') cout<<nama_buku1+nama_buku2<<endl;
   
	}
}
