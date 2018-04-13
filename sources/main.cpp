#include <iostream>
#include <cstdlib>
#include <string>

int main() {

	std::string name = std::getenv("SOMETHING_VAR");
	std::cout << name << std::endl;

	return 0;
}
