#include "classUtility.h"

bool Utility::isBoolean(std::string text)
{
	if (text == "true" || text == "false")
	{
		return true;
	}
	else { return false; }
}
bool Utility::isNumber(std::string text)
{
	for (int i = 0; i < text.size(); ++i)
	{
		if (text[i] == '.')
		{
			count++;
		}
		if (count > 1)
		{
			return false;
		}
		
	}
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] < 45 || text[i] > 57 || text[i] == 47)
		{
			return false;
		}
		else { return true; }
	}
}
bool Utility::isFloat(std::string text)
{
	for (int i = 0; i < text.size(); ++i)
	{
		if (text[i] == '.')
		{
			count++;
		}
		if (count > 1)
		{
			return false;
		}

	}
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] < 45 || text[i] > 57 || text[i] == 47)
		{
			return false;
		}
		else { return true; }
	}
}
bool Utility::isInterger(std::string text)
{
	
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] < 47 || text[i] > 57 )
		{
			return false;
		}
		else { return true; }
	}
}
bool Utility::isEmail(std::string text)
{
	std::regex re("(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]+$)");
	return regex_search(text, re);
}
bool Utility::isURL(std::string text)
{
	std::regex
		re
		("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");
	return regex_search(text, re);
}