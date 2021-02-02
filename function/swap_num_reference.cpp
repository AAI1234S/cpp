#include<iostream>

int  swap(int &a, int &b)
{
	int t=a;
	a=b;
	b=t;

}

main()
{
	int num1,num2;

	std::cout<<"Enter a num1 & num2:"<<std::endl;
	std::cin>>num1>>num2;

	swap(num1, num2);		//calling by actual value
	//swap(num2,num1);
	std::cout<<"After swap:"<<std::endl;
	std::cout<<"num1="<<num1<<"  num2="<<num2<<std::endl;

	return 0;
}

