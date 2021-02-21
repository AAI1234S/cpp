#include<iostream>
class copyconstr
{
	int num1;
	int num2;
	public:
	copyconstr()     //inline constructor
	{
		std::cout<<"Enter the two number:"<<std::endl;
		std::cin>>num1>>num2;
	}
	
	copyconstr(copyconstr &obj);

	void mod();
};

copyconstr::copyconstr(copyconstr &obj)
{
	num1=obj.num1;
	num2=obj.num2;
}
void copyconstr::mod()
{
	std::cout<<num1<<" %"<<num2<<"= "<<num1%num2<<std::endl;

}

int main()
{
	copyconstr obj;
	copyconstr obj1(obj);
	copyconstr obj2=obj;
	obj.mod();
	obj1.mod();
	obj2.mod();
	return 0;
}

