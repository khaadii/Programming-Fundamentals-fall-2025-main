//q1 Write a C++ program to copy the value of one object to another object using copy
//constructor. For example you can define a class for complex number and create its
//object for performing this task. Remember that you must allocate memory
//dynamically to data members.
#include<iostream>
using namespace std;
class complexnumber{
	public:
	int *real;
	int* img;
	complexnumber(int real,int img)
	{
		this->real=new int;
		this->img=new int;
		*(this->real)=real;
		*(this->img)=img;
	}
	complexnumber(const complexnumber &obj)
	{
		this->real=new int;
		this->img=new int;
		*real=*(obj.real);
		*img=*(obj.img);
	}
	void show()
	{
		cout<<"\nreal part:  "<<*(this->real)<<endl;
		cout<<"\nimaginary part:  "<<*(this->img)<<endl;
	}
	~complexnumber()
	{
		delete real;
		delete img;
	}
};
int main()
{
	complexnumber num1(1,2);
	complexnumber num2=num1;
	cout<<"num1:  "<<endl;
	num1.show();
	cout<<"num2:  "<<endl;
	num2.show();
}


