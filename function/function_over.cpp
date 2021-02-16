#include<iostream>

void display(int ch, float len)
{
	std::cout<<"ch="<<ch<<std::endl;
	std::cout<<"len="<<len<<std::endl;
}
void display(float ch, float len)
{
	std::cout<<"ch="<<ch<<std::endl;
	std::cout<<"len="<<len<<std::endl;
}

void display(char ch, double len)
{
	std::cout<<"ch1="<<ch<<std::endl;
	std::cout<<"len1="<<len<<std::endl;
}

int main()
{
	char c='a';
	double l=20.2;

	display(c,l);
	return 0;
}

