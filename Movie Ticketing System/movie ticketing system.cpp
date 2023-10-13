#include<iostream>
#include<iomanip>
using namespace std;
	int booking_number=0;
	int counter=0;
class movie{
	private:
		int price=500;
		int choice;
	int total_bill;
	
		char arr[3][3]={{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
	public:
		void welcome();
		void ticketing();
		void seat_booking();
		void listings();
		void selection();
		void totalbill();
		void getvalues();
};
void movie::welcome()
{
	cout<<"\t\t----------Welcome to movie ticketing system---------\n";
}
void movie::ticketing(){
	
	cout<<"\nMain Menu\n";
	cout<<"Press 1 for Movie listings.\n"
		<<"Press 2 for Total Bill.\n"
		<<"Press 3 for Exit.";
		
		cout<<"\n\nEnter your choice: ";
		cin>> choice;
	
	switch(choice)
	{
		case 1:
			{
			listings();
			break;
			}
			
		case 2:
			{
			totalbill();
			break;
			}
		
		case 3:
			{
			exit(0);
			break;
			}
			
		default:
			{
				cout<<"Invalid number ";
			
			}
			
	}
}
void movie::getvalues()
{
	
	for(int i=0; i<3; i++)
			{
				cout<<"Row"<<i+1<<": ";
				for(int j=0; j<3; j++)
				{
					
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
}

void movie::seat_booking()
{
	getvalues();
	
		cout<<"How many seats do you want to book? ";
	cin>>booking_number;
	bool alreadybooked=0;
	bool error=0;

	for(int i=0; i<booking_number; i++)
	{
		do{
			
		alreadybooked=0;
		error=0;
			
		char seat_number;
		
		cout<<"Enter Seat Number: ";
		cin>>seat_number;
		
		switch(seat_number)
		{
			case '1':
				{
					if(arr[0][0]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[0][0]='X';
					}
					break;
				}
				
				case '2':
				{
					if(arr[0][1]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[0][1]='X';
					}
					break;
				}
				
				case '3':
				{
					if(arr[0][2]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[0][2]='X';
					}
					break;
				}
				
				case '4':
				{
					if(arr[1][0]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[1][0]='X';
					}
					break;
				}
				
				case '5':
				{
					if(arr[1][1]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[1][1]='X';
					}
					break;
				}
				
				case '6':
				{
					if(arr[1][2]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[1][2]='X';
					}
					break;
				}
				
				case '7':
				{
					if(arr[2][0]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[2][0]='X';
					}
					break;
				}
				
				case '8':
				{
					if(arr[2][1]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[2][1]='X';
					}
					break;
				}
				
				case '9':
				{
					if(arr[2][2]=='X')
					{
						alreadybooked=1;
					}
					else{
						arr[2][2]='X';
					}
					break;
				}
				default:
					{
						error=1;
					}
		}
			system("Cls");
		if(alreadybooked==1 )
		{
			cout<<"Seat is already booked, Please try again"<<endl;
		}
				
				
		getvalues();
	}while(alreadybooked==1 || error==1);
	counter++;
	
	
	}

}

void movie::totalbill()
{
	
	
	total_bill= booking_number*price;
	cout<<"Your Total bill will be for "<<booking_number<<" Seats is: "<<total_bill<<endl;

	
}

		
	

void movie::listings()
{
	system("cls");
	cout<<setw(20)<<"\n----Movie Listings---- "<<setw(5)<<"   ---Price---"<<endl;
	
	cout<<setw(20)<<"1-The Shawshank Redemption. "<<setw(5)<<price<<endl;
	cout<<setw(15)<<"2-The Godfather. "<<setw(16)<<price<<endl;
	cout<<setw(15)<<"3-The Dark Knight.  "<<setw(13)<<price<<endl;
	cout<<setw(15)<<"4-12 Angry Men. "<<setw(17)<<price<<endl;
	cout<<setw(15)<<"5-Pulp Fiction. "<<setw(17)<<price<<endl;
	
	int process;
	cout<<"\nEnter your choice: ";
	cin>>process;
	
	switch(process)
	{
		case 1:
			seat_booking();
			break;
		case 2:
			seat_booking();
			break;
		case 3:
			seat_booking();
			break;
		case 4:
			seat_booking();
			break;
		case 5:
			seat_booking();
			break;
		default:
			cout<<"No Movie Available "<<endl;
			
	}
}
int main()
{
	
	movie m;
	
char ch;
m.welcome();
do{
		
		m.ticketing();
				if(counter==9)
				{
				cout<<"No more seats Available\n";
				m.totalbill();
				exit(0);
				}
		int num;
		cout<<"\nPress 1 for More Booking \n";
		cout<<"\nEnter number: ";
		cin>>num;
		if(num==1)
		{
		
			m.ticketing();
		
		
		}
		
		cout<<"\nDo you want to continue (y/n)\n ";
		cin>>ch;
		if(ch=='y')
		{
		system("Cls");
			if(counter==8)
				{
				cout<<"No more seats Available";
				exit(0);
				}
		
		m.ticketing();
		
		
	}
}while( ch!='n' );



if(ch=='n')
{
	system("Cls");
	cout<<"Good Bye! "<<endl;
}

}
