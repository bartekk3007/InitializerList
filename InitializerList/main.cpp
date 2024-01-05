#include <iostream>
#include <initializer_list>

using namespace std;

//does not have output operator defined
void func(auto arg)
{
	cout << arg;
}

int main()
{
	initializer_list<int> ili = {1, 2, 3};

	cout << ili.size() << '\n';

	for (auto iter = ili.begin(); iter != ili.end(); iter++)
	{
		cout << *iter << ' ';
	}

	func(ili);

	return 0;
}