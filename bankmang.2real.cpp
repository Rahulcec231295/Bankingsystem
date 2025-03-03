#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class Bank
{
	private:
		int pin;
		float balance;
		string id,pass,name,fname,address,phone;
	public:
	void menu();
	void Bank_management();
	void Atm_management();
	void new_user();
};
    void Bank::menu()
    {
    	p:
    	system("cls");
    	int choice;
    	char ch;
    	string pin,pass,email;
    	cout<<"\n\n\t\t\tcontrol panel";
    	cout<<"\n\n 1.Bank_management";
    	cout<<"\n 2.Atm_management";
    	cout<<"\n 3.Exit";
    	cout<<"\n\nEnter your choice:";
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    		cout<<"\n\n\t\t\tLogin Account";
    		cout<<"\n\n login email : ";
    		cin>>email;
    		cout<<"\n\n\t\tEnter pin code";
    		for(int i=1;i<=5;i++)
    		{
    			ch = getch();
    			pin += ch;
    			cout<<"*";
			}
			cout<<"\n\n password";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				pass += ch;
				cout<<"*";
			}
			if(email == "rahulsura@gmail.com" && pin == "13366" && pass  == "14366")
			{
		    cout<<"\n\n\t\tBank_management()";
			}
			else
			{
			cout<<"\n\n Your email, pin & password is wrong...";
			}
			break;
			case 2:
		      	Atm_management();
		    	break;
			
			default:
			    cout<<"\n\nInvalid value...please try again...";
		}
		getch();
		goto p;
	} 
	void Bank::Bank_management()
	{
		p:
		int choice;
	    system("cls");
	    cout<<"\n\n\t\t\tAtm management system";
	    cout<<"\n\n 1. New User ";
	    cout<<"\n 2.Already User";
	    cout<<"\n 3.Deposit option";
	    cout<<"\n 4.Withdraw option";
	    cout<<"\n 5.transfer option";
	    cout<<"\n 6.payment option";
	    cout<<"\n 7.search user record";
	    cout<<"\n 8.edit user record";
	    cout<<"\n 9.delete user record";
	    cout<<"\n 10.show all records";
	    cout<<"\n 11.Payment all records";
	    cout<<"\n 12.Go back";
	    cout<<"\n\n Enter your choice";
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1:
	    		new_user();
	    	    break;
	    	case 2:
	    	    break;
	    	case 3:
	    	    break;
	    	case 4:
	    	    break;
	       	case 5:
	    	    break;
	    	case 6:
	    	    break; 
			case 7:
	    	    break; 
			case 8:
	    	    break; 
			case 9:
	    	    break; 
	    	case 10:
	    	    break;
	    	case 11:
	    	    break;
	    	case12:
	    		menu();
	    	default:
			    cout<<"\n\nInvalid value...please try again...";       
		}
		getch();
		goto p;
	}
	void Bank::Atm_management()
	{
		p:
		int choice;
	    system("cls");
	    cout<<"\n\n\t\t\tAtm management system";
	    cout<<"\n\n 1.User login &ncheck balance";
	    cout<<"\n 2.Withdraw amount";
	    cout<<"\n 3.Account details";
	    cout<<"\n 4.Go back";
	    cout<<"\n\n Enter your choice";
	    cin>>choice;
	    switch(choice)
	    {
	    	case 1:
	    	    break;
	    	case 2:
	    	    break;
	    	case 3:
	    	    break;
	    	case 4:
	    		menu();
	    	default:
			    cout<<"\n\nInvalid value...please try again...";       
		}
		getch();
		goto p;
	}
	void Bank :: new_user()
	{
		p:
		system("cls");
		fstream file;
		int p;
		float b;
		string n,f,pa,a,ph,i;
		cout<<"\n\n\t\t\tAdd new user";
		cout<<"\n\n User ID :";
		cin>>id;
		cout<<"\n\n\t\tName : ";
		cin>>name;
		cout<<"\n\n Father Name :";
		cin>>fname;
		cout<<"\n\n\t\tAddress: ";
		cin>>address;
		cout<<"\n\n Pin code(5 digit):";
		cin>>pin;
		cout<<"\n\n Password:";
		cin>>pass;
		cout<<"\n\n Phone No.:";
		cin>>phone;
		cout<<"\n\n\t\tCurrent balance:";
		cin>>balance;
		file.open("bank.txt",ios::in);
		if(!file)
		{
			file.open("bank.txt",ios::app|ios::out);
			file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
			file.close();
		}
		else
		{
			file>>i>>n>>f>>a>>p>>pa>>ph>>b;
			while(!file.eof())
			{
				if( i == id)
				{
					cout<<"\n\n User ID Already Exist...";
					getch();
					goto p;
				}
				file>>i>>n>>f>>a>>p>>pa>>ph>>b;
			}
			file.close();
			file.open("bank.txt",ios::app|ios::out);
			file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
			file.close();
		}
		cout<<"\n\n New user Account created successfully...";
	}
main(){
	Bank obj;
	obj.menu();
}	

