#include<iostream>

class ptrmem
{
	int num1;
	int num2;
	public:

	void set_num(int x, int y);
	friend int sum(ptrmem m);
};

void ptrmem::set_num(int x, int y)
{
	num1=x;
	num2=y;
}

int sum(ptrmem m)
{
	int ptrmem:: *ptr1=&ptrmem:: num1;
        int ptrmem:: *ptr2=&ptrmem:: num2;
	ptrmem *pm=&m;
	int s=m.*ptr1+ pm->*ptr2;
	return s;
}

int main()
{
	ptrmem obj;
	void (ptrmem ::*pf)(int,int)=&ptrmem:: set_num;
	(obj.*pf)(12,34);
	std::cout<<"SUM="<<sum(obj)<<"\n";

	ptrmem *op=&obj;
	(op->*pf)(30,40);
	std::cout<<"sum="<<sum(obj)<<std::endl;
	return 0;
}



