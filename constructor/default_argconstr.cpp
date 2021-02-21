#include<iostream>

class power
{
	int base;
	int ratio;
	

	public:
	power(int a, int b);

	void power_cal();
};

power::power(int a=0, int b=0)
{
	base=a;
	ratio=b;
}

void power::power_cal()
{
	int result=1;
	int temp=ratio;
	while(ratio)
	{
		result=result*base;
		ratio--;
	}

	std::cout<<base<<"^"<<temp<<" ="<<result<<std::endl;
}

int main()
{
	power obj(2,5);
	obj.power_cal();
	return 0;
}

