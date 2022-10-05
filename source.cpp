#include <iostream>
#include <vector>
#include <random>


int main()
{
	std::vector<int>vec{};
	int num;
	std::random_device rd; //obtain a pseudo-random number
	std::mt19937 gen(rd()); //seed
	std::uniform_int_distribution<> distr(1, 9000); //range


	//create n random numbers
	for (int i = 0; i < 40; ++i) {
		num = distr(gen);
		//push into vector vec
		vec.push_back(num);
	}
	//sort vector vec
	std::sort(vec.begin(), vec.end());


	for (auto i : vec) {
		std::cout << i << " ";
	}
	std::cout << "\n";


	//find min. and max. value in vec
	auto it = minmax_element(vec.begin(), vec.end());
	int min = *it.first;
	int max = *it.second;

	std::cout << "min: " << min << "\n";
	std::cout << "max: " << max << "\n";

}