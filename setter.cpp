#include<iostream>
#include<string.h>

using namespace std;

class student{
	
	private:
		int id;
		char name[10];
		int age;
		char course[20];
		char email[30];
		char city[15];
		char clg[20];
		
	public:
		
		void setter(int i, char n[], int a, char c[], char e[], char ci[] , char cl[]){
			id = i;
			strcpy(name,n);
			age = a;
			strcpy(course,c);
			strcpy(email,e);
			strcpy(city,ci);
			strcpy(clg,cl);
		}
		
		void getter(){
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Course : "<<course<<endl;
			cout<<"Email : "<<email<<endl;
			cout<<"City"<<city<<endl;
			cout<<"Clg : "<<clg<<endl<<endl;
		}
};

int main()
{
	
	student stud1,stud2,stud3,stud4,stud5;
	
	stud1.setter(1,"Virat",25,"Full stack Dev.,","virat123@gmail.com","Surat","Bhagavan Mahavir");
	stud1.getter();
	
	stud2.setter(2,"Yagnik",19,"Android Dev.,","yagnik30@gmail.com","Surat","Bhagavan Mahavir");
	stud2.getter();
	
	stud3.setter(3,"Dhruvin",19,"Flutter Dev.,","dhruvin1702@gmail.com","Ahemdabad","Gujarat University");
	stud3.getter();
	
	stud4.setter(4,"Mansi",20,"full stack dev,","virat123@gmail.com","Surat","Parul Mahavir");
	stud4.getter();
	
	stud5.setter(5,"Aashita",18,"Front End,","aashita567@gmail.com","Surat","SDJ");
	stud5.getter();
	
	
	
	
	
	return 0;
}
