#include <vector>
#include <string>

class StringSplitter {
public:
	void split(const std::string& line, const std::string& separator, std::vector<std::string> &words) {
		if (line.empty()) {
			return;
		}
		if (separator.empty()) {
			words.push_back(line);
			return;
		}

		std::size_t startPos = 0;
		std::size_t separatorPos = line.find_first_of(separator);
		std::size_t count;
		while (separatorPos != std::string::npos) {
			count = separatorPos - startPos;
			words.push_back(line.substr(startPos, count));
			startPos = separatorPos + 1;
			separatorPos = line.find_first_of(separator, startPos);
		}

		words.push_back(line.substr(startPos));
	}
};