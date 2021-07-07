#include<iostream>
#include<iomanip>
using namespace std;
class salesperson {

	double totalannualsale();
	double sales[12];
public:
	salesperson();
	void getsalesfromuser();
	void setsales(int ,double);
	void printannualsale();

};
 salesperson::salesperson() {
	for (int i = 0; i <= 12; i++) {
		sales[i] = 0.0;
	}
}
 void salesperson::getsalesfromuser() {
	 double salesfigure;
	 for (int i = 1; i <= 12; i++) {
		 cout << "Enter the amount of sale for month " << i << ":";
		 cin >> salesfigure;
		 setsales(i, salesfigure);
	 }
 };
 void salesperson::setsales(int month,double amount ) {
	 if (month >= 1 && month <= 12 && month > 0) {
		 sales[month - 1] = amount;
	 }
	 else {
		 cout << "invalid month or sales figure !!" << endl;
	 }
 };
 void salesperson::printannualsale(){
 cout<<setprecision(2)<<fixed<<"\n the total annual sales are: $"<<totalannualsale()<<endl;
 
 };
 double salesperson::totalannualsale() {
	 double total=0.0;
	 for (int i = 0; i <= 12; i++) {
		 total += sales[i];
		
	 }
	 return total;
 };

int main() {
	int number;
cout<<"hello and welcome to Annual sale managment programm"<<endl;
cout<<"\n\n\n\t 1) start the programm";
cout<<"\n\n\n\t 2)see the previous data\t\t"<<endl<<endl;
cout<<"please select the input for the menu";
cin>>number;
switch (number){
	case 1:
			salesperson s;
		s.getsalesfromuser();
		s.printannualsale();

		
}
	salesperson s;
	s.getsalesfromuser();
	s.printannualsale();
	cin.get();
	return 0;
};
