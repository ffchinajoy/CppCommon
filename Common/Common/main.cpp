#include <iostream>

#include "String/StringSplitter.hpp"

void test4() {
	std::string line;
	std::string separator = " ";
	std::vector<std::string> words;
	StringSplitter splitString;
	std::size_t average = 0;
	std::size_t i;
	while (getline(std::cin, line)) {
		splitString.split(line, separator, words);
		for (i = 0; i < words.size(); ++i) {
			std::cout << words[i] << std::endl;
			average += words[i].size();
		}

		if (i != 0) {
			average /= i;
		}
		std::cout << "average length = " << average << std::endl;
		average = 0;

		words.clear();
		words.shrink_to_fit();
	}
}


int main(void)
{
	test4();

	return 0;
}