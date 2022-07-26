#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int score_();
int winner(string,string);
void display();
int main()
{

string name;
cout<<"Enter your name--------> ";
getline(cin,name);
cout<<endl;
char input;
int score=0;
do
{
	display();
	score=score+ score_();
	cout<<"Would you like to play again?   y/n    ";
    cin>>input;
	cout<<endl;	
}while(input!='n');

	cout<<name ;

cout<<" your score is--------> "<<score<<endl;
cout<<"\n\n********************************************************************************************\n\n"<<endl;
}
void display()
{
cout<<"********************************************************************************************\n\n"<<endl;
cout<<"________________________________Rock, Scissor ,Paper Game_________________________________\n\n"<<endl;
	cout<<endl;
	cout<<"\t Game rules : "<<endl;
	cout<<"\t ->Rock wins over scissor"<<endl;
	cout<<"\t ->Scissor wins over paper"<<endl;
	cout<<"\t ->Paper wins over rock"<<endl;
	cout<<endl;
}

int score_()
{
	int input;
	string user_input;
    statement:
cout<<"1) Rock"<<endl;
cout<<"2) Paper"<<endl;
cout<<"3) Scissor"<<endl;

cout<<"Enter your input--------> ";
cin>>input;
cout<<endl;	
if(input==1)
{
	user_input="Rock";
}
else if(input==2)
{
	user_input="Paper";
}
else if(input==3)
{
	user_input="Scissor";
}
else
{
	cout<<"!!!!! invalid input !!!!!   Please enter a valid input "<<endl;
	goto statement;
}
int computer_input=rand()%3 + 1;	
string system_input;
if(computer_input==1)
{
	system_input="Rock";
}
else if(computer_input==2)
{
	system_input="Paper";
}
else if(computer_input==3)
{
	system_input="Scissor";
}
cout<<"Computer choose--------> "<<system_input<<endl;
int output=winner(user_input,system_input);
if(output==1)
{
	cout<<"***** You won *****";
	return 1;
}
else if(output==0)
{
	cout<<"!!!!! Computer won !!!!!"<<endl;
	return 0;
}
else if(output==-1)
{
	cout<<"!!!!! Game Draw !!!!!"<<endl;
	return 0;
}
}
int winner(string user_input,string system_input)
{
	if(system_input=="Rock")
	{
		if(user_input=="Rock")
		{
			return -1;
		}
		else if(user_input=="Scissor")
		{
			return  0;
		}
		else if(user_input=="Paper")
		{
			return 1;
		}
	}
	if(system_input=="Scissor")
	{
		if(system_input=="Rock")
		{
			return 1;
		}
		else if(user_input=="Scissor")
		{
			return  -1;
		}
		else if(user_input=="Paper")
		{
			return 0;
		}
	}
	if(system_input=="Paper")
	{
		if(user_input=="Rock")
		{
			return 0;
		}
		else if(user_input=="Scissor")
		{
			return  1;
		}
		else if(user_input=="Paper")
		{
			return -1;
		}
	}
}
