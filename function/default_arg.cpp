#include<iostream>

void display(char ch='*', int len=40)
{
	for(int i=0;i<len;i++)
		printf("%c",ch);
	printf("\n");
}

float total(float amount,  int year, float rate=5)
{
	float sum=amount;
	int y=1;

	while(y<=year)
	{
		//std::cout<<"rate="<<rate<<std::endl;
		sum=sum*(1+rate);
		//year++;
		y=y+1;
	}
	return sum;
}

int main()
{
	float result;
	display();
	result=total(5000,2,3);
	std::cout<<"total amount="<<result<<std::endl;
	display('=');
	return 0;
}


		


