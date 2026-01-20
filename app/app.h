#pragma once
#include <sstream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <set>


namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n);

	void remove_element(std::vector<int>& v, int index);

	void input_element(std::vector<std::string>& v, int index, const std::string& element);

	int list_nth_element(const std::list<int>& c, unsigned long long n);

	void list_sort_desc(std::list<int>& c);

	unsigned int unique_numbers(std::stringstream& ss);


	class word_frequency
	{
	private:
		std::map<std::string, unsigned int> frequency_map;
	public:
		word_frequency(std::stringstream& ss);
		unsigned int count() const;
		unsigned int frequency(const std::string& word) const;
	};
}