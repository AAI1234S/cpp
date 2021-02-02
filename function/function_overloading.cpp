#include<iostream>

class function_over
{
	private:
		int sum;

	public:
	void add(int a, int b)
	{
		sum= a+b;
	}
	void add(int a, int b, int c)
	{
		sum=a+b+c;
	}

	void add(double a, int b)
	{
		sum=a+b;
	}
	void display()
	{
		std::cout<<"sum="<<sum<<std::endl;
	}


};

int main()
{
	function_over obj;
	obj.add(12,34);
	obj.display();
	obj.add(12,34,56);
	obj.display();
	obj.add(12.45,23);
	obj.display();


}

