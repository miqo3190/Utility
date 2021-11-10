#include <iostream>
#include <string>

class Utility
{
public:
	bool isNumber(std::string);
	bool isInterger(std::string);
	bool isFloat(std::string);
	bool isBoolean(std::string);
	bool isEmail(std::string);
	bool isURL(std::string);
private:
	int count = 0;
};