//q2In a virtual battle arena game called "Epic Clash," players control powerful
//characters to engage in intense battles against each other. Each character has
//distinct abilities and attributes, including health, attack power, and defense. Your
//task is to implement the Character class to encapsulate these attributes, provide
//getter and setter methods for them, and offer different constructors to create
//characters with various starting conditions.
//Encapsulation: Ensure that the character's attributes (health, attackPower, and
//defense) are private to the Character class, accessible only through appropriate
//getter and setter methods, allocated memory dynamically in heap.
//Constructors: Implement three constructors: A default constructor that initializes a
//character with standard starting values for health, attack power, and defense. A
//parameterized constructor that allows specifying custom values for health, attack
//power, and defense. A copy constructor that creates a new Character object by
//copying the data from an existing Character object.
#include<iostream>
using namespace std;
class Character{
	private:
		int* health;
		int* attackPower;
		int* defense;
	
	public:	
		//getter for health
		int gethealth()
		{
			return *health;
		}
		//getter for attackpower
		int getattackpower()
		{
			return *attackPower;
		}
		//getter for defense
		int getdefense()
		{
			return *defense;
		}
		
		
		//setter for health
		void sethealth(int health)
		{
			*(this->health)=health;
			
		}
		//setter for attackpower
		void setattackpower(int attackpower)
		{
			*(this->attackPower)=attackpower;
		}
		//setter for defense 
		void setdefense(int defense)
		{
			*(this->defense)=defense;
		}
		
		//default constructor
		Character()
		{
			health=new int(100);
			attackPower=new int(100);
			defense=new int(100);
		}
		
		//parameterized constructor
		Character(int health,int attackPower,int defense)
		{
			this->health=new int(health);
			this->attackPower=new int(attackPower);
			this->defense=new int(defense);
		}
		//copy constructor
		Character(const Character &obj)
		{
			this->health=new int(*(obj.health));
			this->attackPower=new int(*(obj.attackPower));
			this->defense=new int((*(obj.defense)));
		}
		~Character()
		{
			delete health;
			delete attackPower;
			delete defense;
		}
};
int main()
{
	Character c1;
	cout<<"\nFor C1(default constructor), health:  "<<c1.gethealth();
	cout<<"\nFor C1, attackpower:  "<<c1.getattackpower();
	cout<<"\nFor C1, defense:  "<<c1.getdefense();
	
	Character c2(90,80,20);
	cout<<"\nFor C2(parametreized constructor), health:  "<<c2.gethealth();
	cout<<"\nFor C2, attackpower:  "<<c2.getattackpower();
	cout<<"\nFor C2, defense:  "<<c2.getdefense();
	
	Character c3(c2);
	cout<<"\nFor C3(copy constructor), health:  "<<c3.gethealth();
	cout<<"\nFor C3, attackpower:  "<<c3.getattackpower();
	cout<<"\nFor C3, defense:  "<<c3.getdefense();
	
	cout<<"\nc1 after setting by the setter";
	c1.sethealth(70);
	c1.setattackpower(70);
	c1.setdefense(70);
	cout<<"\nFor C1, health:  "<<c1.gethealth();
	cout<<"\nFor C1, attackpower:  "<<c1.getattackpower();
	cout<<"\nFor C1, defense:  "<<c1.getdefense();
	return 0;
}
