#include<iostream>
class NUM2; //class forward declaration
class NUM1
{
	int num1;
	
	public:
	void add_data()
	{
		std::cout<<"Enter the num:"<<std::endl;
		std::cin>>num1;
	}
	private:
	friend void sum(NUM1 , NUM2);   //friend function declration to communicate with another class 
};

class NUM2
{
	int num2;
	public:
	void add_data();
	private:
	friend void  sum(NUM1, NUM2); 
};
void NUM2::add_data()
{
	std::cout<<"Enter the num2:"<<std::endl;
	std::cin>>num2;
}
void sum(NUM1 ob1, NUM2 ob2)   //friend function defination
{
	std::cout<<ob1.num1<<" +"<<ob2.num2<<"="<<ob1.num1+ob2.num2;
}


int main()
{
	NUM1 obj1;
	NUM2 obj2;

	obj1.add_data();
	obj2.add_data();
	sum(obj1, obj2); //friend function calling
	return 0;
}

