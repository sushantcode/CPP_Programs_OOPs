#ifndef _MAINWIN_H
#define _MAINWIN_H

#include <gtkmm.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include "store.h"
#include "entrydialog.h"

class Mainwin : public Gtk::Window{
	public:
		Mainwin();
		virtual ~Mainwin();
		
	protected:
		void on_new_store_click();
		void on_save_click();
		void on_save_as_click();
		void on_open_click();
		void on_quit_click();
		void on_view_peripheral_click();
		void on_view_desktop_click();
		void on_view_order_click();
		void on_view_customer_click();
		void on_insert_ram_click();
		void on_insert_cpu_click();
		void on_insert_disk_click();
		void on_insert_other_click();
		void on_insert_desktop_click();
		void on_insert_order_click();
		void on_insert_customer_click();
		void on_easter_egg_click();
		void on_about_click();
		std::string get_string(std::string promt);
		double get_double(std::string prompt);
		int get_in(std::string prompt);
		void set_data(std::string s);
		void set_msg(std::string s);
		
	private:
		Store *store;
		Gtk::Label *data;
		Gtk::Label *msg;
		std::string filename;
};
#endif
