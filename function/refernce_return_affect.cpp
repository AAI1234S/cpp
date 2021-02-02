#include<iostream>
int & refret(int &a)
{
	std::cout<<"addr="<<&a<<std::endl;

	a=34;

	return a;
}

int main()
{
	int num1;
	std::cout<<"Enter the number:"<<std::endl;
	std::cin>>num1;
	std::cout<<"Address:"<<&num1<<std::endl;
	std::cout<<"num="<<refret(num1)<<std::endl;

	int &b=refret(num1);

	std::cout<<"add="<<&b<<"b="<<b<<std::endl;

	refret(num1)=10;

	std::cout<<"Ref add="<<&b<<" val="<<b<<std::endl;
}
