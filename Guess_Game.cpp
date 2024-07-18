//GUESS THE  NUMBER GAME;
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int level_choice;
	int Guess_number;
	cout<<"\n\t\t\tWelcome To Guess The Number Game !\n"<<endl;
	cout<<"You Have To Guess The Number Between 1 to 100.You Have Limited Number of Choice Based of Level You Chose \n"<<endl;

	cout<<endl;
	while(true)
	{
		cout<<"\n1.Easy Level\t 2.Medium Level\t 3.Hard Level\t 4.Press 0 for Exit\n"<<endl;
		cout<<"Enter the Difficulty Level You Want to Play: ";
		cin>>level_choice;
		cout<<endl;
		srand(time(0));
		int secretNumber = 1+(rand()%100);
		
		if(level_choice==1)
		{
			cout<<"You Have 10 Chance to Guess The Correct Number";
			cout<<endl;	
			int choiceLeft=10;
			for(int i=0;i=10;i++)
			{
		    	cout<<"\n Enter The Guess Number Between 1 to 100=";
				cin>>Guess_number;
						
				if(Guess_number==secretNumber)
			 {
			  cout<<"\n Well Played Congratulation You won\t" <<secretNumber<<"is The Secret Number\n"<<endl;
			  cout<<"Thanks For Playing......\n"<<endl;
				 break;
			 }
				else
				{
					cout<<"\n You Guess Wrong Number...Try Again\n"<<endl;
					
					if(Guess_number>secretNumber)
					{
						cout<<"HINT ! = Secret Number is Smaller then You Guess\n"<<endl;
					}
					else
					{
						cout<<"HINT ! = Secret Number is Grater then You Guess\n"<<endl;
					}
					choiceLeft--;
					cout<<"you Have Left The chance is "<<choiceLeft<<endl;
				}
			}
		}
		else if(level_choice==2)
		{
			cout<<"You Have 7 Chance to Guess The Correct Number";
			cout<<endl;	
			int choiceLeft=7;
			for(int i=0;i<7;i++)
			{
		    	cout<<"\n Enter The Guess Number Between 1 to 100=";
				cin>>Guess_number;
						
				if(Guess_number==secretNumber)
			 {
			  cout<<"\n Well Played Congratulation You won\t" <<secretNumber<<"is The Secret Number\n"<<endl;
			  cout<<"Thanks For Playing......\n"<<endl;
				 break;
			 }
				else
				{
					cout<<"\n You Guess Wrong Number...Try Again\n"<<endl;
					
					if(Guess_number>secretNumber)
					{
						cout<<"HINT ! = Secret Number is Smaller then You Guess\n"<<endl;
					}
					else
					{
						cout<<"HINT ! = Secret Number is Grater then You Guess\n"<<endl;
					}
					choiceLeft--;
					cout<<"you Have Left The chance is "<<choiceLeft<<endl;
				}
			}
		}
		else if(level_choice==3)
		{
			cout<<"You Have 4 Chance to Guess The Correct Number";
			cout<<endl;	
			int choiceLeft=4;
			for(int i=0;i<4;i++)
			{
		    	cout<<"\n Enter The Guess Number Between 1 to 100=";
				cin>>Guess_number;
						
				if(Guess_number==secretNumber)
			 {
			  cout<<"\n Well Played Congratulation You won\t" <<secretNumber<<"is The Secret Number\n"<<endl;
			  cout<<"Thanks For Playing......\n"<<endl;
				 break;
			 }
				else
				{
					cout<<"\n You Guess Wrong Number...Try Again\n"<<endl;
					
					if(Guess_number>secretNumber)
					{
						cout<<"HINT ! = Secret Number is Smaller then You Guess\n"<<endl;
					}
					else
					{
						cout<<"HINT ! = Secret Number is Grater then You Guess\n"<<endl;
					}
					choiceLeft--;
					cout<<"you Have Left The chance is "<<choiceLeft<<endl;
				}
			}
		}
		else if(level_choice==0)
		{
			exit(0);
		}
		else
		{
			cout<<"You Enter Wrong Choice"<<endl;
		}	
	}
}
