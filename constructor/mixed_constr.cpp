#include<iostream>
class mixed
{
	int num1;
	int num2;
	public:
	mixed();
	mixed(int n1, int n2);
	mixed(mixed &obj1, mixed &obj2);
	void sub();
};

mixed::mixed()
{
	num1=0;
	num2=0;
}

mixed::mixed(int n1, int n2)
{
	num1=n1;
	num2=n2;
}

mixed::mixed(mixed &ob1, mixed &ob2)
{
	//mixed c;
	num1=ob1.num1+ ob2.num1;
	num2=ob1.num2+ ob2.num2;
}

void mixed::sub()
{
	std::cout<<num1<<" - "<<num2<<" = "<<num1-num2<<std::endl;
}

int main()
{
	mixed obj;
	mixed obj1(12,10);
	mixed obj2(obj, obj1);
	obj.sub();
	obj1.sub();
	obj2.sub();
	return 0;
}



