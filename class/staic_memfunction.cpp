#include<iostream>

class staticmf
{
	int num;
	static int cnt;

	public:

	void num_add()
	{
		num=cnt++;
	}

	static void get_cnt()
	{
		std::cout<<"cnt="<<cnt<<std::endl;
	//	std::cout<<"num="<<num<<std::endl;  // non static member cannot able to access
	}
	void get_num()
	{
		std::cout<<"num="<<num<<std::endl;
	}

};

int staticmf::cnt=0;

int main()
{
	staticmf obj1, obj2, obj3;

	obj1.num_add();
	obj3.num_add();

	staticmf::get_cnt();

	obj2.num_add();

	obj3.get_cnt(); 
	staticmf::get_cnt();  // both way possible 

	obj1.get_num();
	obj2.get_num();
	obj3.get_num();

	return 0;
}


