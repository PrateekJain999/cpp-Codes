#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int age;
	public:
		Student(string iname, int iage){
			name=iname;
			age=iage;
		}
		void printinfo()
		{
			cout<<name<<endl<<age<<endl;
		}
	friend	void display(Student s);
};
void display(Student s)
{
	cout<<"Non member function "<<endl<<s.name<<endl<<s.age<<endl;
}
int main(){
	Student s("John",25);

	display(s);
	return 0;
}
