#include<iostream>
using namespace std;

ostream & symbol(ostream & output)
{
	return output<<"\tRs";
}

int main()
{
	cout<<"20"<<symbol<<endl;
	return 0;
}


