/* Sushant Gupta 1001520302 */
/* This program sorts the given sets of color code on the basis of their magnitude (darkness/brightness). */

#include "color.h"

bool less_than(Color lhs, Color rhs){
	int result = lhs.compare(&rhs);
	if(result == 0 || result == 1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	std::vector <Color> colors{{156,48,68}, {214,45,126}, {78,148,84}};
	std::sort (colors.begin(), colors.end(), less_than);
	for(std::vector<Color>::iterator curr_color = colors.begin(); curr_color != colors.end(); ++curr_color){
		std::cout << curr_color->colorize(curr_color->to_string()) << std::endl;
	}
	return 0;
}
