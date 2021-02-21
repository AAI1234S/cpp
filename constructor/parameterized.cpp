#include<iostream>

class parameter
{
	int num1;
	int num2;

	public:

	parameter();
	parameter(int n1, int n2);
	void div();
};

parameter::parameter()
{
	num1=1;
	num2=1;
}

parameter::parameter(int n1, int n2)
{
	num1=n1;
	num2=n2;
}

void parameter::div()
{
	std::cout<<num1<<" /"<<num2<<"="<<num1/num2<<std::endl;

}

int main()
{
	parameter obj;
	parameter obj1= parameter(12,2);
	parameter obj2(34, 7);

	obj.div();
	obj1.div();
	obj2.div();
	return 0;
}


