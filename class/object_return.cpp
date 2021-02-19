#include<iostream>
class Complex
{
	int real;
	int img;

	public:

	void add_data()
	{
		std::cout<<"Enter the Real num:"<<std::endl;
		std::cin>>real;
		std::cout<<"Enter the img num:"<<std::endl;
		std::cin>>img;
	}

	void get_data()
	{
		std::cout<<real<<" j"<<img<<std::endl;
	}

	friend Complex add_obj(Complex &obj1, Complex &obj2);
};

Complex add_obj(Complex &obj1, Complex &obj2)
{
	Complex temp;

	temp.real=obj1.real+obj2.real;
	temp.img=obj1.img + obj2.img;

	return temp;
}

int main()
{
	Complex obj1, obj2, obj3;
	obj1.add_data();
	obj2.add_data();
	obj3=add_obj(obj1, obj2);

	obj1.get_data();
	obj2.get_data();
	obj3.get_data();
	return 0;
}


	

