#include<iostream>
#include<cstring>

struct employee
{
	private:
	char name[30];
	int age;
	float sal;
	public:
	employee()
	{
		std::cout<<"Enter Employee Details:"<<std::endl;
		std::cout<<"Name:"<<std::endl;
		std::cin>>name;
		std::cout<<"Age:"<<std::endl;
		std::cin>>age;
		std::cout<<"Sal:"<<std::endl;
		std::cin>>sal;
	}
	 void display()
	{
		std::cout<<"Eployee Detail:"<<std::endl;
		std::cout<<"Name:"<<name<<std::endl;
		std::cout<<"Age:"<<age<<std::endl;
		std::cout<<"Sal:"<<sal<<std::endl;
	}
};

struct family:public employee
{
	unsigned short int number_of_member;
	char father_name[30];
	char mother_name[30];
	
	family()
	{
		//employee();
		std::cout<<"Enter Family detail:"<<std::endl;
		std::cout<<"father_name:"<<std::endl;
		std::cin>>father_name;
		std::cout<<"mother_name:"<<std::endl;
		std::cin>>mother_name;
		std::cout<<"Total member in familly:"<<std::endl;
		std::cin>>number_of_member;
	}
	void display_emp()
	{
		display();
		std::cout<<"Familly Detail are\n";
		std::cout<<"Father Name:"<<father_name<<std::endl;
		std::cout<<"Mother Name:"<<mother_name<<std::endl;
		std::cout<<"Total Member in familly:"<<number_of_member<<std::endl;
	}
};





int main()
{
	family obj;
	obj.display_emp();
	/*strcpy(obj.name,"Ganesh");  //as a public menmber we can directly access
	obj.age=26;
	obj.sal=32000;
	obj.display();*/
	return 0;

}

