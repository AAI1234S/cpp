#include<iostream>

class staticm
{
	public:
	int num1;
	int num2;
	int sum=0;
	static int cnt;

	public:
	void add();
	void display();

};

int staticm:: cnt=0;

void staticm::add()
{
	std::cout<<"Enter a num1 and num2:"<<std::endl;
	std::cin>>num1>>num2;
	sum=num1+num2;
	cnt++;
}
void staticm::display()
{
	std::cout<<num1<<" +"<<num2<<"= "<<sum<<std::endl;
	std::cout<<"Number of time call add:"<<cnt<<std::endl;
}


int main()
{
staticm obj1, obj2, obj3;
//staticm::cnt=2;
obj1.cnt=2;
obj1.add();
obj1.display();
obj2.add();
obj2.display();
obj3.add();
obj3.display();
obj1.add();
obj1.display();
std::cout<<"size of obj1="<<sizeof(obj1)<<std::endl;
std::cout<<"size of obj2="<<sizeof(obj2)<<std::endl;
std::cout<<"size of obj3="<<sizeof(obj3)<<std::endl;

//std::cout<<"size of obj1="<<sizeof(obj.add())<<std::endl;
return 0;
}

