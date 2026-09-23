#include <iostream>
using namespace std;
int main(){
	string customerName;
	string phoneModel;
	int quantity;
	float PricePerPhone;
	float TotalSalesAmount;
	cout<<"Enter customer name:"<<endl;
	cin>>customerName;
	cout<<"Enter phoneModel:"<<endl;
	cin>>phoneModel;
	cout<<"Enter quantity:"<<endl;
	cin>>quantity;
	cout<<"Enter PricePerPhone:"<<endl;
	cin>>PricePerPhone;
	//calculate total sales amount
	TotalSalesAmount=quantity * PricePerPhone;
	//display formatted receipt
	cout<<"SALES RECEIPT"<<endl;
	cout<<"==========================="<<endl;
	cout<<"customerName:"<<customerName<<endl;
	cout<<"phoneModel:"<<phoneModel<<endl;
	cout<<"quantity:"<<quantity<<endl;
	cout<<"PricePerPhone:"<<PricePerPhone<<endl;
	cout<<"TotalSalesAmount:"<<TotalSalesAmount<<endl;
}