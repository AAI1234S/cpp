//default constructor is a constructor that does not have any input argument

#include<iostream>

class dconstr
{
	int num1;
	int num2;

	public:
	dconstr();

	void mul();
};

dconstr::dconstr()
{
	std::cout<<"Enter the num1 and num2:"<<std::endl;
	std::cin>>num1>>num2;
}

void dconstr::mul()
{
	std::cout<<num1<<" * "<<num2<<"= "<<num1*num2<<std::endl;

}

int main()
{
	dconstr obj;
	obj.mul();
	return 0;
}


