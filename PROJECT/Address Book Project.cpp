/****************************************
* Title: Address Book Management        *
* Author: Ammar Ahmed                   *
* IDE: Dev C++ 5.11                     *
* Dated: March 10,2017                  *
* Website: www.cppbeginner.com          *
*****************************************/
#include <iostream>
#include<conio.h>
#include <iomanip>
#include <limits>
#include <string.h>
#include <Windows.h>
using namespace std;
bool check_alphabet(string);
bool check(string);
struct node
{
	int srNo;
	string cellNo,homeNo;
	string name,id,home_address;
	node *next;
};
class Contact_Book
{
	private:
		int count;
		node *head, *tail;				
		node *head1 ,*tail1;
	public:
	Contact_Book()
	{
		head=tail=NULL;
		head1=tail1=NULL;
		count=0;
	}	
	void gotoxy(int x, int y)
	{
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}	
	bool isEmpty()
	{
		if(head == NULL)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	bool empty()
	{
		if(head1 == NULL)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
					// Add Record
	void add_Record(int n)
	{
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		//
		gotoxy(2,5);	
		Above_horizental();
		gotoxy(2,6);
		Line();
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		below_Horizental();
		//
		gotoxy(2,8);	
		Above_horizental();
		gotoxy(2,9);
		Line();
		gotoxy(77,9);
		Line();	
		gotoxy(2,10);
		below_Horizental();
		//
		gotoxy(2,11);	
		Above_horizental();
		gotoxy(2,12);
		Line();
		gotoxy(77,12);
		Line();
		gotoxy(2,13);
		below_Horizental();
		//
		gotoxy(2,14);	
		Above_horizental();
		gotoxy(2,15);
		Line();
		gotoxy(77,15);
		Line();
		gotoxy(2,16);
		below_Horizental();
		node *temp=new node;
		temp->srNo=n;
		gotoxy(23,3);
		cout<<"Enter Person Name: ";
		cin>>temp->name;
		while(check(temp->name)==false)
		{
			gotoxy(42,3);
			cout<<"                       ";
			gotoxy(42,3);
			cin>>temp->name;
		}
		gotoxy(23,6);
		cout<<"Enter Cell Number: ";
		cin>>temp->cellNo;
		if(isEmpty())
		{
				goto n;
		}
		else
		{
			while(tail->cellNo==temp->cellNo)
			{
				gotoxy(42,6);
				cout<<"                   "<<endl;
				gotoxy(42,6);
				cin>>temp->cellNo;
			}
		}
		n:
		while(check_alphabet(temp->cellNo) == false)
			{
				gotoxy(42,6);
				cout<<"                   "<<endl;
				gotoxy(42,6);
				cin>>temp->cellNo;
			}
		gotoxy(23,9);
		cout<<"Enter Home Number: ";
		cin>>temp->homeNo;
		if(isEmpty())
		{
				goto ne;
		}
		else
		{
			while(tail->homeNo==temp->homeNo)
			{
				gotoxy(42,9);
				cout<<"                   "<<endl;
				gotoxy(42,9);
				cin>>temp->homeNo;
			}
		}
		ne:
		while(check_alphabet(temp->homeNo) == false)
			{
				gotoxy(42,9);
				cout<<"                   "<<endl;
				gotoxy(42,9);
				cin>>temp->homeNo;
			}
		gotoxy(23,12);
		cout<<"Enter Email: ";
		cin>>temp->id;
		gotoxy(23,15);
		cout<<"Enter Home Address: ";
		cin>>temp->home_address;
		temp->next=NULL;
		if(isEmpty())
		{
			head=temp;
			tail=temp;
			temp=NULL;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
		count++;
	}
						// Delete Record		
	void Delete_Record()
	{
		node *f=new node;
		node *temp=new node;
		node *curr, *pre;
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		gotoxy(4,3);
		cout<<"ENter The Serial Number In Order To Delete : ";
		cin>>f->srNo;
		if(f->srNo==head->srNo)
		{
			temp=head;
			head=head->next;
			delete temp;
			system("CLS");
			display_table();
			table_data();	
		}
		else
		{
			curr=head;
			pre=NULL;
			while(curr!=NULL){
				if(curr->srNo==f->srNo){
					break;
				}
				pre=curr;
				curr=curr->next;
			}
			if(curr==NULL)
			{
				system("CLS");
				gotoxy(2,2);	
				Above_horizental();
				gotoxy(2,3);
				Line();
				gotoxy(77,3);
				Line();
				gotoxy(2,4);
				below_Horizental();
				gotoxy(4,3);
				cout<<"You Enter Wrong Serial NUmber...!! \n\n";
			}
			else
			{
				pre->next=curr->next;
				delete curr;
				system("CLS");
				display_table();
				table_data();
			}
		}
	}
	                   // Search Record      
	void search_Record()
	{
		node *temp, *t=new node;
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		gotoxy(4,3);
		cout<<"Enter The Serial Number In Order To Search : ";
		cin>>t->srNo;
		temp=head;
			while(temp!=NULL)
			{
				if( t->srNo==temp->srNo)
				{
					break;
				}	
				temp=temp->next;
			}
			if(temp==NULL)
			{
				system("CLS");
				gotoxy(2,2);	
				Above_horizental();
				gotoxy(2,3);
				Line();
				gotoxy(77,3);
				Line();
				gotoxy(2,4);
				below_Horizental();
				gotoxy(4,3);
				cout<<"You Enter Wrong Serial NUmber...!! \n\n";
			}	
			else
			{
				system("CLS");
				display_table();
				gotoxy(2,8);	
				Above_horizental();
				gotoxy(2,9);
				Line();
				gotoxy(77,9);
				Line();
				gotoxy(4,9);
			 	cout<<setw(9)<<left<<temp->srNo<<setw(10)<<left<<temp->name<<setw(14)<<left<<temp->cellNo<<setw(14)<<left<<temp->homeNo<<setw(12)<<left<<temp->id<<setw(11)<<left<<temp->home_address;
				gotoxy(2,10);
				below_Horizental();	
			}
	}
	       			// Edit Record
	void Edit_Record()
	{
		node *f, *t=new node;
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		gotoxy(4,3);
		cout<<"Enter The Serial Number In Order To Edit : ";
		cin>>t->srNo;
		f=head;
		while(f!=NULL)
		{
			if(t->srNo==f->srNo)
			break;
			f=f->next;
		}
		if(f==NULL)
		{
			system("CLS");
			gotoxy(2,2);	
			Above_horizental();
			gotoxy(2,3);
			Line();
			gotoxy(77,3);
			Line();
			gotoxy(2,4);
			below_Horizental();
			gotoxy(4,3);
			cout<<"You Enter Wrong Serial NUmber...!! \n\n";
		}	
		else
		{
			system("CLS");
			gotoxy(2,2);	
			Above_horizental();
			gotoxy(2,3);
			Line();
			gotoxy(77,3);
			Line();
			gotoxy(2,4);
			below_Horizental();
		//
			gotoxy(2,5);	
			Above_horizental();
			gotoxy(2,6);
			Line();
			gotoxy(77,6);
			Line();
			gotoxy(2,7);
			below_Horizental();
		//
			gotoxy(2,8);	
			Above_horizental();
			gotoxy(2,9);
			Line();
			gotoxy(77,9);
			Line();	
			gotoxy(2,10);
			below_Horizental();
		//
			gotoxy(2,11);	
			Above_horizental();
			gotoxy(2,12);
			Line();
			gotoxy(77,12);
			Line();
			gotoxy(2,13);
			below_Horizental();
		//
			gotoxy(2,14);	
			Above_horizental();
			gotoxy(2,15);
			Line();
			gotoxy(77,15);
			Line();
			gotoxy(2,16);
			below_Horizental();
			node *temp=new node;
			gotoxy(23,3);
			cout<<"Enter Person Name: ";
			cin>>temp->name;
			while(check(temp->name)==false)
			{
			gotoxy(42,3);
			cout<<"                       ";
			gotoxy(42,3);
			cin>>temp->name;
			}
			f->name=temp->name;
			gotoxy(23,6);
			cout<<"Enter Cell Number: ";
			cin>>temp->cellNo;
			while(check_alphabet(temp->cellNo) == false)
			{
				gotoxy(42,6);
				cout<<"                   "<<endl;
				gotoxy(42,6);
				cin>>temp->cellNo;
			}
			f->cellNo=temp->cellNo;
			gotoxy(23,9);
			cout<<"Enter Home Number: ";
			cin>>temp->homeNo;
			while(check_alphabet(temp->homeNo) == false)
			{
				gotoxy(42,9);
				cout<<"                   "<<endl;
				gotoxy(42,9);
				cin>>temp->homeNo;
			}
			f->homeNo=temp->homeNo;
			gotoxy(23,12);
			cout<<"Enter Email: ";
			cin>>temp->id;
			f->id=temp->id;
			gotoxy(23,15);
			cout<<"Enter Home Address: ";
			cin>>temp->home_address;
			f->home_address=temp->home_address;
			cout<<"\n\n";	
		}
	}
						// Adding Record Into Personal List
	void Personal_List()
	{
		node *t=new node;
		node *f=new node;
		node *z=new node;
		cout<<endl<<endl;
		cout<<"  Enter Serial Number To Enter The Record In To Pesonal List: ";
		cin>>t->srNo; 
		f=head;
		while(f!=NULL)
		{
			if( t->srNo==f->srNo)
				{
					break;
				}	
			f=f->next;
		}	                               
		z=head1;
		while(z!=NULL)
		{
			if( z->srNo==t->srNo)
				{
					system("CLS");
					gotoxy(2,2);	
					Above_horizental();
					gotoxy(2,3);
					Line();
					gotoxy(77,3);
					Line();
					gotoxy(2,4);
					below_Horizental();
					gotoxy(4,3);
					cout<<"This Reocord Already Exits In Personal List....!\n\n";
					system("pause");
					system("CLS");
					return;
				}	
			z=z->next;
		}		
		if(f==NULL)
		{
			system("CLS");
			gotoxy(2,2);	
			Above_horizental();
			gotoxy(2,3);
			Line();
			gotoxy(77,3);
			Line();
			gotoxy(2,4);
			below_Horizental();
			gotoxy(4,3);
			cout<<"You Enter Wrong Serial NUmber...!! \n\n";
		}	
		else
		{
			Favourites(f->srNo,f->name,f->cellNo,f->homeNo,f->id,f->home_address);    
			system("CLS");
					gotoxy(2,2);	
					Above_horizental();
					gotoxy(2,3);
					Line();
					gotoxy(77,3);
					Line();
					gotoxy(2,4);
					below_Horizental();
					gotoxy(4,3);
			cout<<"Record Entered In Favourites..!! \n\n";
		}
	}
							// Save Record Into Personal List
	void Favourites(int a,string b,string c,string d,string e,string f)
	{
		node *temp=new node;
		temp->srNo=a;
		temp->name=b;
		temp->cellNo=c;
		temp->homeNo=d;
		temp->id=e;
		temp->home_address=f;
		temp->next=NULL;
		if(head1==NULL)
		{
			head1=temp;
			tail1=temp;
			temp=NULL;
		}
		else
		{
			tail1->next=temp;
			tail1=temp;
		}
	}
					//
	void search_Fav()
	{
		node *temp, *t=new node;
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		gotoxy(4,3);
		cout<<"Enter The Serial Number In Order To Search : ";
		cin>>t->srNo;
		temp=head1;
			while(temp!=NULL)
			{
				if( t->srNo==temp->srNo)
				{
					break;
				}	
				temp=temp->next;
			}
			if(temp==NULL)
			{
				system("CLS");
				gotoxy(2,2);	
				Above_horizental();
				gotoxy(2,3);
				Line();
				gotoxy(77,3);
				Line();
				gotoxy(2,4);
				below_Horizental();
				gotoxy(4,3);
				cout<<"You Enter Wrong Serial NUmber...!! \n\n";
			}	
			else
			{
				system("CLS");
				display_table();
				gotoxy(2,8);	
				Above_horizental();
				gotoxy(2,9);
				Line();
				gotoxy(77,9);
				Line();
				gotoxy(4,9);
			 	cout<<setw(9)<<left<<temp->srNo<<setw(10)<<left<<temp->name<<setw(14)<<left<<temp->cellNo<<setw(14)<<left<<temp->homeNo<<setw(12)<<left<<temp->id<<setw(11)<<left<<temp->home_address;
				gotoxy(2,10);
				below_Horizental();	
			}
	}				
					//
	void Delete_Fav()
	{
		node *f=new node;
		node *temp=new node;
		node *curr, *pre;
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		gotoxy(4,3);
		cout<<"ENter The Serial Number In Order To Delete : ";
		cin>>f->srNo;
		if(f->srNo==head1->srNo)
		{
			temp=head1;
			head1=head1->next;
			delete temp;
			system("CLS");
			show_Personal_List();	
		}
		else
		{
			curr=head1;
			pre=NULL;
			while(curr!=NULL){
				if(curr->srNo==f->srNo){
					break;
				}
				pre=curr;
				curr=curr->next;
			}
			if(curr==NULL)
			{
				system("CLS");
				gotoxy(2,2);	
				Above_horizental();
				gotoxy(2,3);
				Line();
				gotoxy(77,3);
				Line();
				gotoxy(2,4);
				below_Horizental();
				gotoxy(4,3);
				cout<<"You Enter Wrong Serial NUmber...!! \n\n";
			}
			else
			{
				pre->next=curr->next;
				delete curr;
				system("CLS");
				show_Personal_List();
			}
		}
	}	
					//
	void Edit_Fav()
	{
		node *f, *t=new node;
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		below_Horizental();
		gotoxy(4,3);
		cout<<"Enter The Serial Number In Order To Edit : ";
		cin>>t->srNo;
		f=head1;
		while(f!=NULL)
		{
			if(t->srNo==f->srNo)
			break;
			f=f->next;
		}
		if(f==NULL)
		{
			system("CLS");
			gotoxy(2,2);	
			Above_horizental();
			gotoxy(2,3);
			Line();
			gotoxy(77,3);
			Line();
			gotoxy(2,4);
			below_Horizental();
			gotoxy(4,3);
			cout<<"You Enter Wrong Serial NUmber...!! \n\n";
		}	
		else
		{
			system("CLS");
			gotoxy(2,2);	
			Above_horizental();
			gotoxy(2,3);
			Line();
			gotoxy(77,3);
			Line();
			gotoxy(2,4);
			below_Horizental();
		//
			gotoxy(2,5);	
			Above_horizental();
			gotoxy(2,6);
			Line();
			gotoxy(77,6);
			Line();
			gotoxy(2,7);
			below_Horizental();
		//
			gotoxy(2,8);	
			Above_horizental();
			gotoxy(2,9);
			Line();
			gotoxy(77,9);
			Line();	
			gotoxy(2,10);
			below_Horizental();
		//
			gotoxy(2,11);	
			Above_horizental();
			gotoxy(2,12);
			Line();
			gotoxy(77,12);
			Line();
			gotoxy(2,13);
			below_Horizental();
		//
			gotoxy(2,14);	
			Above_horizental();
			gotoxy(2,15);
			Line();
			gotoxy(77,15);
			Line();
			gotoxy(2,16);
			below_Horizental();
			node *temp=new node;
			gotoxy(23,3);
			cout<<"Enter Person Name: ";
			cin>>temp->name;
			while(check(temp->name)==false)
			{
			gotoxy(42,3);
			cout<<"                       ";
			gotoxy(42,3);
			cin>>temp->name;
			}
			f->name=temp->name;
			gotoxy(23,6);
			cout<<"Enter Cell Number: ";
			cin>>temp->cellNo;
			while(check_alphabet(temp->cellNo) == false)
			{
				gotoxy(42,6);
				cout<<"                   "<<endl;
				gotoxy(42,6);
				cin>>temp->cellNo;
			}
			f->cellNo=temp->cellNo;
			gotoxy(23,9);
			cout<<"Enter Home Number: ";
			cin>>temp->homeNo;
				while(check_alphabet(temp->homeNo) == false)
			{
				gotoxy(42,9);
				cout<<"                   "<<endl;
				gotoxy(42,9);
				cin>>temp->homeNo;
			}
			f->homeNo=temp->homeNo;
			gotoxy(23,12);
			cout<<"Enter Email: ";
			cin>>temp->id;
			f->id=temp->id;
			gotoxy(23,15);
			cout<<"Enter Home Address: ";
			cin>>temp->home_address;
			f->home_address=temp->home_address;
			cout<<"\n\n";		
		}
	}							
					//	Show Personal LIst
	void show_Personal_List()
	{
		node *t=new node;
		gotoxy(30,2);
		cout<<"Personal Contatcts"<<endl;
		display_table();
		t=head1;
		int x=4;
		int y=8;
		int s=2;
		while(t!=NULL)
		{
			gotoxy(s,y);
			Above_horizental();
			gotoxy(s,y+1);
			Line();
			gotoxy(s+75,y+1);
			Line();
			gotoxy(x,y+1);
			cout<<setw(9)<<left<<t->srNo<<setw(10)<<left<<t->name<<setw(14)<<left<<t->cellNo<<setw(14)<<left<<t->homeNo<<setw(12)<<left<<t->id<<setw(11)<<left<<t->home_address;
			t=t->next;
			gotoxy(s,y+2);
			below_Horizental();	
			y=y+3;
		}
			gotoxy(s,y+1);
			Above_horizental();
			gotoxy(s,y+2);
			Line();
			gotoxy(s+75,y+2);
			Line();
			gotoxy(x+31,y+2);
			cout<<"Finish";
			gotoxy(s,y+3);
			below_Horizental();
	}
						// Show Data
	void table_data()
	{
		node *t;
		t=head;
		int x=4;
		int y=8;
		int s=2;
		while(t!=NULL)
		{	
			gotoxy(s,y);
			Above_horizental();
			gotoxy(s,y+1);
			Line();
			gotoxy(s+75,y+1);
			Line();
			gotoxy(x,y+1);
			cout<<setw(9)<<left<<t->srNo<<setw(10)<<left<<t->name<<setw(14)<<left<<t->cellNo<<setw(14)<<left<<t->homeNo<<setw(12)<<left<<t->id<<setw(11)<<left<<t->home_address;
			t=t->next;
			gotoxy(s,y+2);
			below_Horizental();	
			y=y+3;
		}
			gotoxy(s,y+1);
			Above_horizental();
			gotoxy(s,y+2);
			Line();
			gotoxy(s+75,y+2);
			Line();
			gotoxy(x+31,y+2);
			cout<<"Finish";
			gotoxy(s,y+3);
			below_Horizental();
	}
						// Show Table
	void display_table()
	{
		gotoxy(2,3);	
		Above_horizental();
		gotoxy(2,4);
		Line();	
		gotoxy(77,4);
		Line();	
		gotoxy(2,5);
		Line();	
		gotoxy(77,5);
		Line();
		gotoxy(2,6);
		Line();	
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		below_Horizental();	
		gotoxy(33,4);
		cout<<"Contact Book";
		gotoxy(4,6);
		cout<<"Sr.No    ""Name      "<<"Phone No      "<<"Home No       "<<"Email       "<<"Home Address "<<"\n\n";
	}
	void Above_horizental()
	{
		char prev = ' ';
		prev = cout.fill((char)205);
		cout << (char)201 << setw(74) << "" << (char)187 << endl;
		cout.fill(prev);
	}
	void Line()
	{
		cout << (char)186<< endl;
	}
	void below_Horizental()
	{
		char prev = ' ';
		prev = cout.fill((char)205);
		cout << (char)200 << setw(74) << "" << (char)188 << endl;
		cout.fill(prev);
	}
					// Show Menu
	void menu()
	{
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		Line();
		gotoxy(77,4);
		Line();
		gotoxy(2,5);
		Line();
		gotoxy(77,5);
		Line();
		gotoxy(2,6);
		Line();
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		Line();
		gotoxy(77,7);
		Line();
		gotoxy(2,8);
		Line();
		gotoxy(77,8);
		Line();
		gotoxy(2,9);
		Line();
		gotoxy(77,9);
		Line();
		gotoxy(2,10);
		Line();
		gotoxy(77,10);
		Line();
		gotoxy(2,11);
		Line();
		gotoxy(77,11);
		Line();
		gotoxy(2,12);
		Line();
		gotoxy(77,12);
		Line();
		gotoxy(2,13);
		Line();
		gotoxy(77,13);
		Line();
		gotoxy(2,14);
		Line();
		gotoxy(77,14);
		Line();
		gotoxy(2,15);
		Line();
		gotoxy(77,15);
		Line();
		gotoxy(2,16);
		Line();
		gotoxy(77,16);
		Line();
		gotoxy(2,17);
		Line();
		gotoxy(77,17);
		Line();
		gotoxy(2,18);
		Line();
		gotoxy(77,18);
		Line();
		gotoxy(2,19);
		Line();
		gotoxy(77,19);
		Line();
		gotoxy(2,20);
		below_Horizental();
	//
		gotoxy(35,3);
	cout<<"MAIN MENU"<<endl;
		gotoxy(4,6);
	cout<<"1-Add Record"<<endl;
		gotoxy(4,8);
	cout<<"2-Delete Record"<<endl;
		gotoxy(4,10);
	cout<<"3-Search Record"<<endl;
		gotoxy(4,12);
	cout<<"4-Edit Record"<<endl;
		gotoxy(4,14);
	cout<<"5-Display Record"<<endl;
		gotoxy(4,16);
	cout<<"6-Personal List"<<endl;
		gotoxy(4,18);
	cout<<"7-Quit Program"<<endl;	
	}
	void Menu1()
	{
		gotoxy(2,2);	
		Above_horizental();
		gotoxy(2,3);
		Line();
		gotoxy(77,3);
		Line();
		gotoxy(2,4);
		Line();
		gotoxy(77,4);
		Line();
		gotoxy(2,5);
		Line();
		gotoxy(77,5);
		Line();
		gotoxy(2,6);
		Line();
		gotoxy(77,6);
		Line();
		gotoxy(2,7);
		Line();
		gotoxy(77,7);
		Line();
		gotoxy(2,8);
		Line();
		gotoxy(77,8);
		Line();
		gotoxy(2,9);
		Line();
		gotoxy(77,9);
		Line();
		gotoxy(2,10);
		Line();
		gotoxy(77,10);
		Line();
		gotoxy(2,11);
		Line();
		gotoxy(77,11);
		Line();
		gotoxy(2,12);
		Line();
		gotoxy(77,12);
		Line();
		gotoxy(2,13);
		Line();
		gotoxy(77,13);
		Line();
		gotoxy(2,14);
		Line();
		gotoxy(77,14);
		Line();
		gotoxy(2,15);
		Line();
		gotoxy(77,15);
		Line();
		gotoxy(2,16);
		Line();
		gotoxy(77,16);
		Line();
		gotoxy(2,17);
		Line();
		gotoxy(77,17);
		Line();
		gotoxy(2,18);
		below_Horizental();
	//
		gotoxy(38,3);
	cout<<"MENU"<<endl;
		gotoxy(28,1);
	cout<<"What do you want to do?"<<endl;
		gotoxy(4,6);
	cout<<"1-Add Record Into Favourites"<<endl;
		gotoxy(4,8);
	cout<<"2-Delete Record From Favourites"<<endl;
		gotoxy(4,10);
	cout<<"3-Search Record From Favourites"<<endl;
		gotoxy(4,12);
	cout<<"4-Edit Record From Favourites"<<endl;
		gotoxy(4,14);	
	cout<<"5-Display Record"<<endl;
		gotoxy(4,16);
	cout<<"6-Go Back To Main Menu"<<endl;	
	}
};
			//	Main()
int main()
{
	system("CLS");
	Contact_Book obj;
	int n,srno=1;
	int ch;
	a:	
	obj.menu();
	obj.gotoxy(2,21);
	obj.Above_horizental();
	obj.gotoxy(2,22);
	obj.Line();
	obj.gotoxy(77,22);
	obj.Line();
	obj.gotoxy(2,23);
	obj.below_Horizental();
	obj.gotoxy(4,22);
	cout<<"Enter your choice: ";
	while(!(cin >> ch))
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("CLS");
			obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
			cout << "Invalid input...  Try again: \n\n";
			system("pause");
			system("CLS");
			goto a;
			}
	/*l:
	char c=getch();
  		if(c>='1' && c<'8'){
		ch=c-48;
		cout<<c;
	  		goto l2;
		}
		else
		{
			ch=getch();
		}
  	goto l;
	l2:
  	Sleep(200);
  	system("CLS");*/
	switch(ch)
	{
		case 1:
		system("CLS");
		obj.gotoxy(2,2);
		obj.Above_horizental();
		obj.gotoxy(2,3);
		obj.Line();
		obj.gotoxy(77,3);
		obj.Line();
		obj.gotoxy(2,4);
		obj.below_Horizental();
		obj.gotoxy(4,3);
		cout<<"How Many person's Record You Want To Enter: ";
			while(!(cin >> n))
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("CLS");
			obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
			cout << "Invalid input...  Try again: \n\n";
			system("pause");
			system("CLS");
			goto a;
		}
		system("CLS");
		system("color A1");
		if(obj.isEmpty())
		{	srno=1;
			for(int i=0;i<n;i++)
			{
				
				obj.add_Record(srno);
				srno++;
				system("CLS");
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				
				obj.add_Record(srno);
				srno++;
				system("CLS");
			}
		}
			obj.gotoxy(2,2);
			obj.Above_horizental();
			obj.gotoxy(2,3);
			obj.Line();
			obj.gotoxy(77,3);
			obj.Line();
			obj.gotoxy(2,4);
			obj.below_Horizental();
			obj.gotoxy(4,3);
			cout<<"Record Added Successfully...! \n";
			obj.gotoxy(4,5);
			system("pause");
			system("CLS");
			goto a;
			break;
		case 2:
			system("CLS");
			system("color B1");
			if(obj.isEmpty())
			{
				obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
				cout<<"Contact Book Is Empty....! \n"<<endl;
			}
			else
			{
				obj.Delete_Record();
			}
			system("pause");
			system("CLS");
			goto a;
			break;
		case 3:
			system("CLS");
			system("color C1");
			if(obj.isEmpty())
			{
				obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
				cout<<"Please Add Record first....! \n"<<endl;
			}
			else
			{
				obj.search_Record();
			}
			system("pause");
			system("CLS");
			goto a;
			break;
		case 4:
			system("CLS");
			system("color D1");
			if(obj.isEmpty())
			{
				obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
				cout<<"Please Add Record first....! \n"<<endl;
			}
			else
			{
			obj.Edit_Record();
			}
			system("pause");
			system("CLS");
			goto a;
			break;	
		case 5:
			system("CLS");
			system("color A");
			if(obj.isEmpty())
			{
				obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
				cout<<"Please Add Record first....! \n"<<endl;
			}
			else
			{
			obj.display_table();
			obj.table_data();
			}
			system("pause");
			system("CLS");
			goto a;
			break;	
		case 6:
			system("CLS");
			system("color FC");
			goto s;	
		case 7:
			exit(0);
		default:
			system("CLS");
			obj.gotoxy(2,2);
			obj.Above_horizental();
			obj.gotoxy(2,3);
			obj.Line();
			obj.gotoxy(77,3);
			obj.Line();
			obj.gotoxy(2,4);
			obj.below_Horizental();
			obj.gotoxy(4,3);
			cout<<"INVALID NUMBER..! ";
			obj.gotoxy(4,5);
			system("pause");
			system("CLS");
			goto a;
	}
		s:
			obj.Menu1();
			obj.gotoxy(2,19);
			obj.Above_horizental();
			obj.gotoxy(2,20);
			obj.Line();
			obj.gotoxy(77,20);
			obj.Line();
			obj.gotoxy(4,20);
			cout<<"Enter your choice: ";
			obj.gotoxy(2,21);
			obj.below_Horizental();
			int cho = 0;
			obj.gotoxy(24,20);
			while(!(cin >> cho))
			{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("CLS");
			obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
			cout << "Invalid input...  Try again: \n\n";
			system("pause");
			system("CLS");
			goto s;
			}
			switch(cho)
			{
				case 1:
				system("CLS");	
				if(obj.isEmpty())
				{
					obj.gotoxy(2,2);
					obj.Above_horizental();
					obj.gotoxy(2,3);
					obj.Line();
					obj.gotoxy(77,3);
					obj.Line();
					obj.gotoxy(2,4);
					obj.below_Horizental();
					obj.gotoxy(4,3);
					cout<<"Contact Book Is Empty....! \n"<<endl;
				}
				else
				{
					obj.display_table();
					obj.table_data();
					cout<<endl;
					obj.Personal_List();
				}
					system("pause");
					system("CLS");
					goto s;
					break;
				case 2:
					system("color E");
					system("CLS");	
				if(obj.isEmpty())
				{
					obj.gotoxy(2,2);
					obj.Above_horizental();
					obj.gotoxy(2,3);
					obj.Line();
					obj.gotoxy(77,3);
					obj.Line();
					obj.gotoxy(2,4);
					obj.below_Horizental();
					obj.gotoxy(4,3);
					cout<<"Contact Book Is Empty....! \n"<<endl;
				}
				else
				{
					if(obj.empty())
					{
						obj.gotoxy(2,2);
						obj.Above_horizental();
						obj.gotoxy(2,3);
						obj.Line();
						obj.gotoxy(77,3);
						obj.Line();
						obj.gotoxy(2,4);
						obj.below_Horizental();
						obj.gotoxy(4,3);
						cout<<"Personal List Is Empty....! \n"<<endl;
					}
					else
					obj.Delete_Fav();
				}
				system("pause");
				system("CLS");
				goto s;
				break;	
				case 3:
					system("CLS");
					system("color AC");
					if(obj.isEmpty())
					{
						obj.gotoxy(2,2);
						obj.Above_horizental();
						obj.gotoxy(2,3);
						obj.Line();
						obj.gotoxy(77,3);
						obj.Line();
						obj.gotoxy(2,4);
						obj.below_Horizental();
						obj.gotoxy(4,3);
						cout<<"Contact Book Is Empty ....! \n"<<endl;
					}
					else
					{
						if(obj.empty())
						{
							obj.gotoxy(2,2);
							obj.Above_horizental();
							obj.gotoxy(2,3);
							obj.Line();
							obj.gotoxy(77,3);
							obj.Line();
							obj.gotoxy(2,4);
							obj.below_Horizental();
							obj.gotoxy(4,3);
							cout<<"Personal List Is Empty....! \n"<<endl;
						}
						else
						obj.search_Fav();
					}
					system("pause");
					system("CLS");
					goto s;
					break;
					case 4:
						system("CLS");
						system("color D");
						if(obj.empty())
						{
							obj.gotoxy(2,2);
							obj.Above_horizental();
							obj.gotoxy(2,3);
							obj.Line();
							obj.gotoxy(77,3);
							obj.Line();
							obj.gotoxy(2,4);
							obj.below_Horizental();
							obj.gotoxy(4,3);
							cout<<"Personal List Is Empty ....! \n"<<endl;
						}
						else
						{
							if(obj.empty())
							{
							obj.gotoxy(2,2);
							obj.Above_horizental();
							obj.gotoxy(2,3);
							obj.Line();
							obj.gotoxy(77,3);
							obj.Line();
							obj.gotoxy(2,4);
							obj.below_Horizental();
							obj.gotoxy(4,3);
							cout<<"Personal List Is Empty....! \n"<<endl;
							}
							else
								obj.Edit_Fav();
								system("CLS");
								obj.show_Personal_List();
						}
						system("pause");
						system("CLS");
						goto s;
						break;
					case 5:
						system("CLS");
						system("color A");
						if(obj.isEmpty())
						{
							obj.gotoxy(2,2);
							obj.Above_horizental();
							obj.gotoxy(2,3);
							obj.Line();
							obj.gotoxy(77,3);
							obj.Line();
							obj.gotoxy(2,4);
							obj.below_Horizental();
							obj.gotoxy(4,3);
							cout<<"Contact Book Is Empty ....! \n"<<endl;
						}
					else
					{
						if(obj.empty())
						{
						obj.gotoxy(2,2);
						obj.Above_horizental();
						obj.gotoxy(2,3);
						obj.Line();
						obj.gotoxy(77,3);
						obj.Line();
						obj.gotoxy(2,4);
						obj.below_Horizental();
						obj.gotoxy(4,3);
						cout<<"Personal List Is Empty....! \n"<<endl;
						}
						else
							obj.show_Personal_List();
					}
					system("pause");
					system("CLS");
					goto s;
					break;
				case 6:
					system("CLS");
					system("color F");
					goto a;
				default:
				system("CLS");
				obj.gotoxy(2,2);
				obj.Above_horizental();
				obj.gotoxy(2,3);
				obj.Line();
				obj.gotoxy(77,3);
				obj.Line();
				obj.gotoxy(2,4);
				obj.below_Horizental();
				obj.gotoxy(4,3);
				cout<<"INVALID NUMBER..! ";
				obj.gotoxy(4,5);
				system("pause");
				system("CLS");
				goto s;
		}
	return 0;
}
bool check(string a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}
bool check_alphabet(string a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>=65 && a[i]<=122)
		{
			return false;
		}
		else
		{
			i++;
		}
	}
	return true;
}
