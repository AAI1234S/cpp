#include<iostream>

class data
{
	public:
		int num1;
		int num2;
};

void add(int x, int y)
{
	int sum=x+y;
	std::cout<<x<<"+"<<y<<"="<<sum<<std::endl;

}

int main()
{
	data obj;
	std::cout<<"Enter the two number:"<<std::endl;
	std::cin>>obj.num1>>obj.num2;
	add(obj.num1, obj.num2);
	return 0;
}


