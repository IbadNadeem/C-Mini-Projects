#include<iostream>
using namespace std;
class prod {
	public:
	string prod_name;
	long int prod_bar;
	prod() {
		prod_name="";prod_bar=0;
	} 
	void scanner() {
		cout<<"\nName=";cin>>prod_name;
		cout<<"Barcode=";cin>>prod_bar;
	}
	void printer() {
		cout<<"\nName="<<prod_name<<"\nBarcode="<<prod_bar<<endl;
	}
};
class pre_food : public prod {
	public:
	float price;
	pre_food() {
	price=0;	
	}
	void scanner() {
		cout<<"\nPre Food Name=";cin>>prod_name;
		cout<<"Pre Food Barcode=";cin>>prod_bar;
		cout<<"Pre Food Price=";cin>>price;
}
	void printer() {
		cout<<"\nName="<<prod_name<<"\nBarcode="<<prod_bar;
		cout<<"\nPrice"<<price<<endl;
	}
};  
class fresh_food : public prod {
	public:
	float weight;float pkilo;
	fresh_food() {
		weight=0;pkilo=0;
	}
	void scanner() {
		cout<<"\nFresh Food Name=";cin>>prod_name;
		cout<<"Fresh Food Barcode=";cin>>prod_bar;
		cout<<"Fresh Food Weight=";cin>>weight;
		cout<<"Fresh Food Price Per Kilo=";cin>>pkilo;
	}
	void printer() {
		cout<<"\nName="<<prod_name<<"\nBarcode="<<prod_bar;
		cout<<"\nPrice (With Weight)="<<weight*pkilo<<endl;
	}
}; 
int main() {
	system ("TITLE Automatic Checkout System");
	system ("color b");
	prod mouse,keyboard;
	cout<<"Enter Product Names And Their Barcodes\n";
	mouse.scanner();keyboard.scanner();
	pre_food nug,fries;
	cout<<"\nEnter Pre Packed Foods Product Names, Barcodes And Their Price\n";
	nug.scanner();fries.scanner();
	cout<<"\nEnter Fresh Foods Product Names, Barcodes And Their Prices\n";
	fresh_food potato, meat;
	potato.scanner();meat.scanner();
	system ("CLS");
	cout<<"Products\n";mouse.printer();keyboard.printer();
	cout<<"\nPre Packed Food Products\n";nug.printer();fries.printer();
	cout<<"\nFresh Food Products\n";potato.printer();meat.printer();
}
