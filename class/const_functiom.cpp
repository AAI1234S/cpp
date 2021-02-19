#include<iostream>
class constmf
{
	int num1=10;
	int num2=3;

	public:
	void num_access()
	{
		std::cout<<"num1="<<num1<<"num2="<<num2<<std::endl;
		num1++;// error try to modify const fun
		num2++;
	}
	void modif_access()const;

};

void constmf::modif_access()const
{
	//num1++;
	//num2++;
	std::cout<<"num1="<<num1<<"\nnum2="<<num2<<std::endl;
}

int main()
{
	constmf obj;
	obj.num_access();
	obj.modif_access();
	return 0;
}


