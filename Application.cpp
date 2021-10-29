#include <iostream>
#include "VideoGame.h"

// Main
int main()
{
	char foodChar;

	std::cout << "Today I will play " << RecommendMeAVideoGame('b') << std::endl;

	std::cout << "Enter (a, b or c) to recommend a food: ";
	std::cin >> foodChar;
	std::cout << RecommendMeFood(foodChar) << std::endl;

	system("pause");
}
