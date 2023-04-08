#include<iostream>
#include<string.h>

using namespace std;

class Customer{
	
	private:
		
		int id;
		char name[15];
		int age;
		char brand[10];
		char num[18];
		char city[10];
		int validity;
		
	public:
		
		void setter(int i, char n[], int a, char b[], char nu[], char c[], int v){
			id = i;
			strcpy(name,n);
			age = a;
			strcpy(brand,b);
			strcpy(num,nu);
			strcpy(city,c);
			validity = v;
			
		}
			
		void getter(){
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Brand name : "<<brand<<endl;
			cout<<"Number : "<<num<<endl;
			cout<<"City : "<<city<<endl;
			cout<<"Validity(in years) : "<<validity<<endl<<endl;
		}
		
};

int main()
{
	
	Customer cust1, cust2, cust3, cust4, cust5;
	
	cust1.setter(1, "Dhruvin", 19, "Jio", "8140598732" , "Surat", 5);
	cust1.getter();

	cust2.setter(2, "Jenil", 20, "Airtel", "8937568294" , "Ahemdabad", 3);
	cust2.getter();
	
	cust3.setter(3, "Dhruvi", 18, "VI", "92837684957" , "Vadodara", 5);
	cust3.getter();
	
	cust4.setter(4, "Aashita", 19, "Jio", "8937569037" , "Rajkot", 6);
	cust4.getter();
	
	cust5.setter(5, "Mansi", 19, "VI", "9987624673" , "Amreli", 5);
	cust5.getter();	
	
	return 0;
}
