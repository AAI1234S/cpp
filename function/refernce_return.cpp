#include<iostream>
int & max(int &a , int &b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	int num1, num2;
	int greatr;
	std::cout<<"Enter the num1 and num2:"<<std::endl;
	std::cin>>num1>>num2;

	greatr=max(num1,num2);
	if(num1==greatr)
		std::cout<<num1<<"  is greater."<<std::endl;
	else
		std::cout<<num2<<" is greater."<<std::endl;

	return 0;
}
	
