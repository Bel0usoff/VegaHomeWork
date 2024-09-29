#include<iostream>
#include<cstdlib>
#include"Rect.hpp"
int main(int argc, char* argv[])
{
	if(argc!=3)
	{
		std :: cerr<<"requires 3 arguments"<<'\n';
	}
	int width,lenth;
	
	width = std :: atoi(argv[1]);
	lenth = std :: atoi(argv[2]);
	
	Rectangle A(width,lenth);
	std :: cout << A.Area()<<'\n'; 
	std :: cout << A.Perimetr()<<'\n';
	return 0;
}