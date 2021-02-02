#include<iostream>

class default_arg
{
	public:
		int default_agr(int a, int b, int c=0, int d=2)
		{
			return a+b+c+d;
		}

	
};

int main()
{
	int add;
	default_arg obj;
	add=obj.default_agr(12,34,56);

	std::cout<<add<<std::endl;

	add=obj.default_agr(10,20);
	std::cout<<add<<std::endl;

	return 0;
}

