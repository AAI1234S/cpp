/*Inline function is a function the function when we declare function is an iline the function will copy the inline function and change the calling line like a macro but in macro their is not checking any data type. But inline when we declare that send just request to consider a function is a inline its not a command. 
 * prototype: inline return_data_type  fun_name(argument......);
*/

#include<iostream>

inline int add(int a, int b)
{
	return a+b;
}

inline int sub(int a, int b)
{
	return a-b;
}

inline int mul(int a, int b)
{
	return a*b;
}

inline int div1(int a, int b)
{
	return a/b;
}

int main()
{
	int num1, num2, choice;
	while(1)
	{
	std::cout<<"Enter a Number:"<<std::endl;
	std::cin>>num1>>num2;
	
	std::cout<<"Select :\n1.add\n2.sub\n3.mul\n4.div\n0.exit\n"<<std::endl;
	std::cin>>choice;

	switch(choice)
	{
		case 1:
			std::cout<<num1<<" + "<<num2<<" = "<<add(num1,num2)<<std::endl;
		       		break;
			
		case 2:std::cout<<num1<<" - "<<num2<<" = "<<sub(num1,num2)<<std::endl;
		       break;
	
		case 3:std::cout<<num1<<" * "<<num2<<" = "<<mul(num1,num2)<<std::endl;
		       break;
		case 4:std::cout<<num1<<" / "<<num2<<" = "<<div1(num1,num2)<<std::endl;
		       break;
		case 0:exit(0);
		       break;
	}

	}
	return 0;
}

