#include<iostream>
#include<vector>
using namespace std;
class Student{
	private:
		int rollno,age;
		string name;
	public:
		Student(int stdRollno,string stdName,int stdAge){
		rollno = stdRollno;
		name = stdName;
		age = stdAge;
	}
	void setRollno(int stdRollno){
		rollno = stdRollno;
	}
	int getRollno()
	{
		return rollno;
	}
	void setName(string stdName){
		name = stdName;
	}
	string getName()
	{
		return name;
	}
	void setAge(int stdAge){
		age = stdAge;
	}
	int getAge()
	{
		return age;
	}
		
	
};
// Create function to add new student
void addNewStudent(vector<Student> &students){
	int rollno,age;
	string name;
	cout<<"Enter Rollno : ";
	cin>>rollno;
	
	//Check if student already exist
	for(int i=0; i<students.size();i++)
	{
		if(students[i].getRollno()==rollno)
		{
			cout<<"\t\tStudent Already Exist..."<<endl;
			return;
		}
	}
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Age : ";
	cin>>age;
	
	Student newStudent(rollno,name,age);
	students.push_back(newStudent);
	
	cout<<"\t\tStudent Add Successfully..."<<endl;
}
main()
{
	vector<Student> students;
	students.push_back(Student(1,"Harish",22));
	
	char choice;
	
	do{
//		system("cls");
		int op;
	cout<<"\t\t---------------------"<<endl;
	cout<<"\t\tStudent Management System"<<endl;
	cout<<"\t\t---------------------"<<endl;
	cout<<"\t\t1. Add New Student"<<endl;
	cout<<"\t\t2. Display All Students "<<endl;
	cout<<"\t\t3. Search Student"<<endl;
	cout<<"\t\t4. Update Student"<<endl;
	cout<<"\t\t5. Delete Student"<<endl;
	cout<<"\t\t6. Exit"<<endl;
	cout<<"\t\tEnter Your Choice : ";
	cin>>op;
	switch(op){
		case 1:
			addNewStudent(students);
			break;
			case 6:
				exit(1);
			default:
				cout<<"\t\tInvalid Number ....."<<endl;
	}
	cout<<"\t\tDo you want to continue [ Yes / No ] ? : ";
	cin>>choice;
	}
	while(choice=='y'||choice=='Y');
	
	
}
