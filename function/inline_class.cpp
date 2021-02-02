#include<iostream>

class inline1
{
	int num1, num2;

	public:
	inline1()
	{
		std::cout<<"Enter the number:"<<std::endl;
		std::cin>>num1>>num2;
	}

	inline int add(int a,int b)
	{
		return a+b;
	}

	void display()
	{
		std::cout<<num1<<" + "<<num2<<" = "<<add(num1,num2)<<std::endl;
	}
	~inline1()
	{
		std::cout<<"destrutor"<<std::endl;
		
		//obj=NULL;
	}
};

int main()
{
	inline1 *obj=new inline1;
	obj->display();
	obj->~inline1();
	//delete obj;
	obj=NULL;
	std::cout<<obj<<std::endl;
	inline1 obj2;
	obj=&obj2;
	obj->display();
	obj->~inline1();
	//delete (obj);
	obj=NULL;
	std::cout<<"add obj"<<&obj<<std::endl;

	int *ptr;
	std::cout<<ptr<<std::endl;

	return 0;
}


