#include "options.h"
#include <iomanip>
#include <sstream>

Options::Options(std::string name, double cost)
	: _name{name}, _cost{cost} { }
	
Options::~Options() { }

double Options::cost(){
	return _cost;
}

std::string Options::to_string() const{
	std::ostringstream costStream;
	costStream << std::fixed << std::setprecision(2) << _cost;
	return _name + " ($" + costStream.str() + ")";
}

std::ostream& operator<<(std::ostream& ost, const Options& option){
	ost << option.to_string();
	return ost;
}

Options* Options::copy(){
	return new Options{*this};
}

Options::Options(std::istream& ist){
	std::getline(ist, _name);
	std::string cost;
	std::getline(ist, cost);
	try{
		_cost = std::stod(cost);
	}catch(std::exception& e){
		throw std::runtime_error{"Options Data Corrupted."};
	}
}

void Options::save(std::ostream& ost){
	ost << "Options\n";
	ost << _name << std::endl;
	ost << _cost << std::endl;
}
