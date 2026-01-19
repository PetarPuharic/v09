#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n) {
		for (int i = 0; i < n; ++i) {
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int index) {
		// Gledamo da li je index validan
		if (index < v.size()) {
			v.erase(v.begin() + index);
		}
		else
			throw std::out_of_range("Index out of range");
	}

	void input_element(std::vector<std::string>& v, int index, const std::string& element) {
		// Gledamo da li je index validan
		if (index <= v.size()) {
			v.insert(v.begin() + index, element);
		}
		else
			throw std::out_of_range("Index out of range");
	}

	int list_nth_element(const std::list<int>& c, unsigned long long n) {
		if (n >= c.size()) {
			throw std::out_of_range("Index out of range");
		}
		auto it = c.begin();
		std::advance(it, n);
		return *it;
	}

	void list_sort_desc(std::list<int>& c) {
		c.sort(std::greater<int>());
	}

	unsigned int unique_numbers(std::stringstream& ss) {
		std::map<int, bool> unique_map;
		int number;
		while (ss >> number) {
			unique_map[number] = true;
		}
		return unique_map.size();
	}

	word_frequency::word_frequency(std::stringstream& ss) {
		std::string word;
		while (ss >> word) {
			std::transform(word.begin(), word.end(), word.begin(), ::tolower);
			frequency_map[word]++;
		}
	}

	unsigned int word_frequency::count() const {
		return frequency_map.size();
	}

	unsigned int word_frequency::frequency(const std::string& word) const {
		auto it = frequency_map.find(word);
		if (it != frequency_map.end()) {
			return it->second;
		}
		return 0;
	}
}