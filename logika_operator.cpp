#include<iostream>
using namespace std;

int main()
{
	int dus_mie=48 ,dus_kopi=48 ,hasil;
	
	hasil= dus_mie < 20 && dus_kopi>48;
	cout<<" hasil ke dua dus "<<hasil<<endl;
	
	hasil= dus_mie != dus_kopi;
	cout<<" hasil ke dua dus "<<hasil<<endl;
	
	hasil= dus_mie || dus_kopi;
	cout<<" hasil ke dua dus "<<hasil<<endl;
}
