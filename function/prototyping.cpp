#include<iostream>

// prototying of fun:  
float fun(int a,int b,int c, int d);

float fun(int a,int b,int c, int d)
{
	return a+b;
	return c+d;
}

main()
{
	int a;
	float b;
	a=fun(12,34,56,67.87);
	b=fun(12,23.45,56,67.8);
	std::cout<<b<<std::endl;


}

