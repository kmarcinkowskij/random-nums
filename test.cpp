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

	for (int i = 0; i < 40; ++i) {
		num = distr(gen);
		vec.push_back(num);
	}

	for (auto i : vec) {
		std::cout << i << " ";
	}
	std::cout << "\n";

	auto it = minmax_element(vec.begin(), vec.end()); 
	int min = *it.first;
	int max = *it.second;

	std::cout << "min: " << min << "\n";
	std::cout <<"max: " << max << "\n";
	
}
