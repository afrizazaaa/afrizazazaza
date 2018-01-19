#include <iostream>
#include <string>
using namespace std;

class celana{
	public:
		void bahan(string jeans);
		string merk;
		double harga;
};
int main () {
	celana jeans;
	
	jeans.merk ="levis";
	jeans.harga = 80000;
	
	cout<<"merk yang dipakai "<< (jeans.merk)<<endl;
	cout<<"Harga modal nya "<< (jeans.harga)<<endl;
	
	jeans.bahan("terbuat jeans yang berkualitas KW super");
}
void celana::bahan(string jeans){
	cout<<"jeans yang digunakan sangat berkualitas dan nyaman "<<jeans<<" kalu lo make jeans ini lo bakal keren dan kece!!!"<<endl;
}

