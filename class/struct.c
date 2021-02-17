/* structure of c having limitation: c structure are all public member their data hiding concept not availble */

#include<stdio.h>
#include<stdlib.h>
struct mem
{
	
		int age;
		char name[30];
};

		struct mem*  enter_data()
		{
			struct mem *ptr=NULL;
			printf("Enter the data age and name:");
			fflush(stdin);
			scanf("%d %s",&ptr->age,ptr->name);
			printf("ag:%d\nnm:%s\n",ptr->age,ptr->name);
			//obj=ptr;
			return ptr;
		}
		void get_data(struct mem *obj)
		{
			printf("Out put:\n");
			printf("Age:\n",obj->age);
			printf("Name:\n",obj->name);
		}

int main()
{
	struct mem obj,*ptr=NULL;
	ptr=enter_data();
	printf("age:-\n",ptr->age);
	get_data(ptr);

	return 0;
}


