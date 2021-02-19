#include<iostream>

class objrefar
{
  int num;

  public:
  void add_num();
  void swap(objrefar &, objrefar &);
};

void objrefar::add_num()
{
	std::cout<<"Enter the num:"<<std::endl;
	std::cin>>num;
}
void objrefar::swap(objrefar &ob1, objrefar &ob2)  // object pass as a referance 
{
	std::cout<<"Before swap:\n"<<"obj1.num="<<ob1.num<<"\nobj2.num="<<ob2.num<<std::endl;
	int temp=ob1.num;
	ob1.num=ob2.num;
	ob2.num=temp;
	std::cout<<"Before swap:\n"<<"obj1.num="<<ob1.num<<"\nobj2.num="<<ob2.num<<std::endl;
}

int main()
{
	objrefar obj1, obj2, obj3;

	obj1.add_num();
	obj2.add_num();
	//std::cout<<"Before swap:\n"<<"obj1.num="<<obj1.num<<"\nobj2.num="<<obj2.num<<std::endl;
	obj3.swap(obj1, obj2);

	//std::cout<<"Before swap:\n"<<"obj1.num="<<obj1.num<<"\nobj2.num="<<obj2.num<<std::endl;
	return 0;
}


