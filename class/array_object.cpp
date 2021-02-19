#include<iostream>
class employee
{
	char name[30];
	float sal;

	public:
	void putdata();
	void getdata();
};

void employee ::putdata()
{
	std::cout<<"Enter the Employee detail:"<<std::endl;
	std::cout<<"Name:"<<std::endl;
	std::cin>>name;
	std::cout<<"Sal:"<<std::endl;
	std::cin>>sal;
}

void employee::getdata()
{
	std::cout<<"Employee Details:"<<std::endl;
	std::cout<<"Name:"<<name<<std::endl;
	std::cout<<"Sal:"<<sal<<std::endl;
}
int const manger=2;
int const foreman=5;
int const worker=10;
int main()
{
	employee manegar[manger], forman[foreman], workers[worker];

	for(int i=0;i<manger;i++)
		manegar[i].putdata();
	for(int i=0;i<manger;i++)
		manegar[i].getdata();
	
	for(int i=0;i<foreman;i++)
		forman[i].putdata();
	for(int i=0;i<foreman;i++)
		forman[i].getdata();
	for(int i=0;i<worker;i++)
		workers[i].putdata();
	for(int i=0;i<worker;i++)
		workers[i].putdata();

	return 0;
}



