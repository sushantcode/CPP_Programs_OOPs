#ifndef _STORE_H
#define _STORE_H

#include <vector>
#include "customer.h"
#include "options.h"
#include "desktop.h"
#include "order.h"
#include "ram.h"
#include "cpu.h"
#include "disk.h"
#include <set>

const std::string ELSA_FILE_FORMAT = "ELSA-Store";
const std::string ELSA_FILE_VERSION = "1.2.0";
    
class Store{
	public:
		Store();
		void add_customer(Customer& customer);
		int num_customers();
		Customer& customer(int index);
		void add_option(Options& option);
		int num_options();
		Options& option(int index);
		int new_desktop();
		void add_option(int option, int desktop);
		int num_desktops();
		Desktop& desktop(int index);
		int new_order(int customer);
		void add_desktop(int desktop, int order);
		int num_orders();
		Order& order(int index);
		Store(std::istream& ist);
		void save(std::ostream& ost);
		
	private:
		std::vector<Customer> customers;
		std::vector<Options*> options;
		std::vector<Desktop> desktops;
		std::vector<Order> orders;
};

#endif
