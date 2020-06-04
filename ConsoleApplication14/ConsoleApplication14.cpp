#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
int main()
{
	srand((unsigned)time(0));

	std::list<int> Li;
	for (int i = 0; i < 50; i++)
		Li.push_back(rand() % 100 - 50);

	std::list<int>::iterator p = Li.begin();
	for (; p != Li.end(); ++p)
		std::cout << *p << ' ';
	std::cout << std::endl;

	for (p = Li.begin(); p != Li.end();)
	{
		if (*p < 0)
		{
			Li.insert(++p, 10);
		}
		else
			++p;
	}

	std::cout << std::endl;
	for (p = Li.begin(); p != Li.end(); ++p)
		std::cout << *p << ' ';
	std::cout << std::endl;

	system("pause");
}