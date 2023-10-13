#include<iostream>
#include<conio.h>
using namespace std;
char ch;
class calculator
{
	private:
		int number1, number2;
		char op;
	public:
		void welcome();	
		char num();
		void calc();
		void addition();
		void subtraction();
		void multiplication();
		void division();
		void number();
};

void calculator::welcome()
{
	cout<<"\t\t-----!! Welcome to Sarosh's Calculator !!-----\n\n";
	
	cout<<"Press (+)- for Addition \n"
		<<"Press (-)- for Subtraction \n"
		<<"Press (*)- for Multiplication \n"
		<<"Press (/)- for Divison \n"<<endl;
	
}

char calculator::num()
{
	cout<<"Choose Any One Option: ";
	op=getch();
	
	return op;
}

void calculator::calc()
{
	
	char i= op;
	
	
	
	system("cls");
	
	cout<<"You Pressed: "<<i<<endl<<endl;
	
	switch(i)
	{
		 case '+': {addition(); break;}
		  case '-': {subtraction(); break;}
		   case '*': {multiplication(); break;}
		    case '/': {division(); break;}
		    default: {cout<<"Invalid Choice\n\n"; break;}
}
}

void calculator::number()
{
	cout<<"Enter First Number: ";
	cin>>number1;
	cout<<endl;

	
	cout<<"Enter Second Number: ";
	cin>>number2;
	cout<<endl;
}

void calculator::addition()
{
	number();
	int result1;
	
	result1= number1 + number2;
	
	cout<<"The additon of "<< number1<<" + "<< number2<<" is "<< result1;
	
	cout<<endl<<endl;
}

void calculator::subtraction()
{
	number();
	int result2;
	
	result2= number1 - number2;
	
	cout<<"The subtraction of "<< number1<<" - "<< number2<<" is "<< result2;
	cout<<endl<<endl;
}

void calculator::multiplication()
{
	number();
	int result3;
	
	result3= number1 * number2;
	
	cout<<"The multiplication of "<< number1<<" * "<< number2<<" is "<< result3;
	cout<<endl<<endl;
}

void calculator::division()
{
	number();
	int result4;
	
	result4= number1 / number2;
	
	cout<<"The additon of "<< number1<<" / "<< number2<<" is "<< result4;
	cout<<endl<<endl;
}



int main()
{
	
	calculator c;
	do
	{
			c.welcome();
			c.num();
			c.calc();
			
			cout<<"Do You Want To Continue (y/n) ";
			cin>>ch;
			
						if(ch=='y')
						{
							system("cls");
						}
		
	}while(ch!='n');
	
	
	
	if(ch=='n')
	{
		system("cls");
		cout<<"\nGood Bye!";
	}
}
