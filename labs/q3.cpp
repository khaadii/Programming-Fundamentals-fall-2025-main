//Create a class tollbooth. The two data items are a type int to hold the total number
//of cars and a type double to hold the total amount of money collected. A
//constructor initializes both these to 0. When a car passes the toll, a member
//function called payingCar( ) increments the car total and adds 0.50 to the cash
//total. Another member function displays the two totals. DESIGN and IMPLEMENT
//this case. Make assumptions (if required) and include it in the description before
//designing the solution.
#include<iostream>
using namespace std;
class Tollbooth{
	public:
	int noc;
	double amount;
	
	//constructor
	Tollbooth()
	{
		noc=0;
		amount=0;
	}
	
	//paying car
	void payingCar( )
	{
		noc++;
		amount+=0.50;
	}
	
	//display total
	void show()
	{
		cout<<"\nNo. of cars:  "<<noc;
		cout<<"\nAmount collected:  "<<amount;
	}
};
int main()
{
	Tollbooth t1;
	t1.payingCar();
	t1.show();
	return 0;
}
