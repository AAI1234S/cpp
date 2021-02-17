
void array::add_element()
{
	std::cout<<"Enter the "<<size<<" element:"<<std::endl;
	for(int i=0;i<size;i++)
		std::cin>>arr[i];
}

void array::square_element()
{
	for(int i=0;i<size;i++)
		arr[i]=arr[i]*arr[i];
}

void array::display_element()
{
	std::cout<<"Array are:"<<std::endl;
	for(int i=0;i<size;i++)
		std::cout<<"arr["<<i<<"]="<<arr[i]<<std::endl;
	std::cout<<std::endl;
}




	
