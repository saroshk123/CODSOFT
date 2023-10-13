#include<iostream>
using namespace std;
class student{
		private:
			string name[100];
			double grade[100];
			int num_of_students;
			double total_grade=0.0;
			double maximum_grade= INT_MIN;
			double minimum_grade= INT_MAX;
			double average_grade;
		
			
		public:
			int NoOfStudents();
			void getting_data();
			void calculating_grades();
			void ouput_data();
			
};

int student::NoOfStudents()
{
	cout<<"Enter the number of students:";
	cin>> num_of_students;
	
	return num_of_students;
}

void student::getting_data()
{
		
	for(int i=0; i<num_of_students; i++)
	{
		cout<<"\nEnter the name of student: ";
		cin>>name[i];
	
		cout<<"\nEnter the grade of student: ";
		
		cin>>grade[i];
	}
	system("cls");
}



void student::calculating_grades()
{
	
	for(int i=0; i<num_of_students; i++)
	{
		total_grade+=grade[i];
		
		if(maximum_grade<grade[i])
		{
			maximum_grade=grade[i];
		}
		
			if(minimum_grade>grade[i])
		{
			minimum_grade=grade[i];
		}
		
	}
		average_grade= total_grade/num_of_students;
}

void student::ouput_data()
{
	cout<<"\nStudent grades Summary: \n";
	cout<<"\nAverage Grade: "<<average_grade<<endl;
	cout<<"Highest Grade: "<<maximum_grade<<endl;
	cout<<"Lowest Grade: "<<minimum_grade<<endl;
	cout<<"________________________________________________________________________________________________________________________\n";
	cout<<"\nStudent grades:\n";
	for(int i=0; i<num_of_students; i++)
	{
		
		cout<<"Name of student: "<<name[i]<<endl;
		cout<<"Grade of student: "<<grade[i]<<endl;
	}
	
}

int main()
{
	char ch;
	
	do{
		student s;
	
		s.NoOfStudents();
		s.getting_data();
		s.calculating_grades();
		s.ouput_data();
		
		cout<<"\nWant to Continue (y/n) ";
		cin>>ch;
		

	}while(ch!='n');
	
}
