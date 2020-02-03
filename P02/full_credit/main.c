/* Sushant Gupta 1001520302 */
/* This program prints given text and command in the representative color. */

#include "color.h"

int main(){
	Color red{255,0,0}, green{0,128,0}, purple{95,0,135};
	std::cout << red.colorize("Red") << "\n" << green.colorize("Green") << "\n" << purple.colorize("Purple") << std::endl;
	int user_red, user_green, user_blue;
	std::cout << "Enter an integer representing Red: ";
	std::cin >> user_red;
	std::cout << "Enter an integer representing Green: ";
	std::cin >> user_green;
	std::cout << "Enter an integer representing Blue: ";
	std::cin >> user_blue;
	Color user_input{user_red,user_green,user_blue};
	std::cout << user_input.colorize(user_input.to_string()) << std::endl;
}
