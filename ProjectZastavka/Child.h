#include <iostream>
#include <string>


struct Child {
	std::string a;
	std::string b; // пол (м/ж)
	int c; // рост в сантиметрах
};
class  ChildAnalyzer {
private:
	std::string a, b;
	int c;
public:
	void set(std::string name, std::string gender, int height)
	{
		a = name;
		b = gender;
		c = height;
	}

	std::string getname()
	{
		return a;
	}
	std::string getgender()
	{
		return b;
	}
	int getheight()
	{
		return c;
	}
};
