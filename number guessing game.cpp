#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	int num;
	int guess;
	int tries;
	
	srand(time(NULL));
	num = (rand() % 100) + 1;
	
	cout<<" ****** NUMBER GUESSING GAME ******\n"<<endl;
	
	do{
		cout<<"Enter a guess between (1-100): "<<endl;
		cin>>guess;
		tries++;
		
		if(guess > num) {
			cout<<"Too high! Try again!\n"<<endl;
		}
		
		else if(guess < num) {
			cout<<"Too low! Try again!\n"<<endl;
		}
		
		else {
			cout<<"CORRECT!"<<endl;
		}
		
	}
	
	while(guess != num);
	cout<<"******************************************\n";
	
	return 0;
	
	}
