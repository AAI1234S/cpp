#include<iostream>

class acces
{
	int num;

	void get_private();

	public:

	void acc_private();
};

void acces::get_private()
{
	std::cout<<"Enter the num:"<<std::endl;
	std::cin>>num;
}

void acces::acc_private()
{
	get_private();
	std::cout<<"num="<<num<<std::endl;
}

int main()
{
	acces obj;
	obj.acc_private();
	//obj.get_private();
	return 0;
}

