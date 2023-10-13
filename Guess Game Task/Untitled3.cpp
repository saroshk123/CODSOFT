#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
bool log;
int score=0;
int attempt=0;							//globally defined variable		
class guess_game					//class
{					
	private:							
		int number;					//private data members
		int guess_number;
	
		
	public:
		void game();				// public data fuctions declaration
		int guess();
		void random_number();				
		void welcome();
	
		
		int num()
		{
			return number;
		}
};


void guess_game::random_number()			// public data fuctions definition
{	
		srand(time(0));
	number= rand()%100;

}
void guess_game::welcome()
{
	cout<<"_______________________________________________________________________________________________________________________\n";
	
		cout<<"\t\t\t\t-----GUESS THE NUMBER GAME-----\n";					
        cout<<"\t\t\t\t---CREATED BY SAROSH KHAN---\n\n";			
		cout<<"\t\t\t\tIf you guessed right you will get 50 score. \n";
      	cout<<"\t\t\t\t\tYour current score is: "<<score<<endl;
      
     	cout<<"_______________________________________________________________________________________________________________________\n";
	
}


int guess_game::guess()
{

		cout<<"\n\nGuess the number: ";
		cin>>guess_number;
		
		return guess_number;
}



void guess_game::game()
{

	if(guess_number==number)
	{
		cout<<"Correct answer!" <<endl;
		
		cout<<"Your guessed number is "<< number<<endl;
		
		log=1;
		
		score+=50;
		attempt++;
	}
	
	else if(guess_number>number)
	{
		cout<<"Your guess is too high \n\n"<<endl;
		attempt++;
	}
	
	else if(guess_number<number)
	{
		cout<<"Your guess is too low "<<endl;
		attempt++;
	}
	
	else
	{
		cout<<"Try Again!"<<endl;
	}
}

int main()				//main function
{

	char gme;
	do					//outer do-while loop
	{
		guess_game g;	//object of class	
	char ch;
	int n;
	do{				//inner do-while loop
	g.welcome();	
	g.guess();
	g.random_number();
	g.game();
	
	if(log)
	{
		cout<<"Your current score is:" <<score<<endl; 
		cout<<"You attempt the number in "<<attempt<<" Attempt"<<endl;
		break;
	}
	
	cout<<"Do you want to continue the guess? \n"
		<<"y- (YES)\n"
		<<"n-(NO)\n"<<endl;
		cin>>ch;
		
	
	
	} while(ch!='n' && ch!='y');
	
			if(ch=='y')
			{
				cout<<"\nHow many tries you want?";
				cin>>n;
				system("cls");
				for(int i=0; i<n; i++)
					{
			
					cout<<"Guess Again "<<endl;
		
					g.guess();
		
					g.game();
					
										
					
					if(log)
					{
						system("cls");
							cout<<"You attempt the number in "<<attempt<<" Attempt"<<endl;
							cout<<"Your current score is:" <<score<<endl<<endl; 
							cout<<"Correct answer!" <<endl;
						break;
					}
					
					
			
					}
					
					cout<<"\nYou have completed your chances!\n"<<endl;
					cout<<"The number was: "<<g.num()<<endl;
			}
	
	if(ch=='n')
	{
		system("cls");
		
		
	}
		
	cout<<"\nDo you want to continue the game? \n"
		<<"y- (YES)\n"
		<<"n-(NO)\n"<<endl;
		cin>>gme;
		system("cls");
	}while(gme!='n');
	
	
	if(gme=='n')
	{
		system("cls");
			cout<<"_______________________________________________________________________________________________________________________\n";
		cout<<"You Have completed the game with: "<<score<<" Score"<<endl<<endl;
		cout<<"-----Thank you for playing the game-----"<<endl;
		cout<<"\n\nGood Bye!"<<endl;
			cout<<"_______________________________________________________________________________________________________________________\n";
	}
	
}

