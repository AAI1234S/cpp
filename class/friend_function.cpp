#include<iostream>

class Max
{
	int num1;
	int num2;
	
	public:
	void add_data();
	private:
	friend void max_obj(Max obj);   // private member access outside the class or non member function
};

void Max::add_data()
{
	std::cout<<"Enter num:"<<std::endl;
	std::cin>>num1;
	std::cout<<"ENter Num2:"<<std::endl;
	std::cin>>num2;
}

void max_obj(Max obj)
{
	if(obj.num1>=obj.num2)
		std::cout<<obj.num1<<"is greater"<<std::endl;
	else
		std::cout<<obj.num2<<"is greater"<<std::endl;
}

int main()
{
	Max obj;
	obj.add_data();
	max_obj(obj);   //By using class object if we try to call function its give bug complie time
	return 0;
}


