#include <iostream>
#include <string>

#include "Set.hpp"
#include "SymbolTable.h"

using namespace std;

int main() 
{
	SymbolTable s;
	std::vector<SymbolTable::Position> positions;
	positions.push_back(s.insert("a").first);
	positions.push_back(s.insert("b").first);
	SymbolTable::Position copy = positions[1];
	positions.push_back(s.insert("c").first);
	positions.push_back(s.insert("d").first);

	 positions.push_back(s.find("a"));
	 positions.push_back(copy);

	for (auto& position : positions)
		cout << *position << endl;

	/*Set<std::string> s;
	s.insert("a");
	s.insert("b");
	s.insert("c");
	s.insert("d");
	s.insert("e");
	s.insert("f");
	s.insert("g");

	cout << *(s.find("a"));
	cout << *(s.find("b"));
	cout << *(s.find("c"));
	cout << *(s.find("d"));
	cout << *(s.find("e"));
	cout << *(s.find("f"));
	cout << *(s.find("g"));*/

	return 0;
}