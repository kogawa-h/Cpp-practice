#include<iostream>

#include<list>

#include<cstdlib>



int main(void)

{

	std::list<int> l;

	while (true)

	{

		int input;

		std::cout << "正の整数を入力:";

		std::cin >> input;

		if (input == -1)break;

		if (l.size() == 0)l.push_back(input);

		else

		{

			std::list<int>::iterator i;

			i = l.begin();
			while (input > *i && i != l.end())i++;
			l.insert(i, input);


		}

		std::cout << "入力された値:";

		for (std::list<int>::iterator i = l.begin(); i != l.end(); i++)std::cout << *i << " ";

		std::cout << std::endl;

	}

	return EXIT_SUCCESS;

}