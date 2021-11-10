#include "funcUtility.h"

int main()
{
	Utility set1;
	std::string text;
	getline(std::cin, text);
	std::cout<< set1.isNumber(text);
}