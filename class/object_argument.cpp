#include<iostream>

class objarg
{
	int num;
	int sum;
	public:
	void add_data();
	private:
	void sum_data(objarg, objarg); //argument call by value
};

void objarg::add_data()
{
	std::cout<<"Enter the number:"<<std::endl;
	std::cin>>num;
}

void objarg::sum_data(objarg obj1, objarg obj2)
{
	sum=obj1.num+obj2.num;
	std::cout<<obj1.num<<" + "<<obj2.num<<" = "<<sum<<std::endl;
}

int main()
{
	objarg obj1, obj2,obj3;
	obj1.add_data();
	obj2.add_data();
	obj3.sum_data(obj1,obj2);
}

