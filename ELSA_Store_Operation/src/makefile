CXXFLAGS += --std=c++17
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: mainwin

debug: CXXFLAGS += -g
debug: mainwin

mainwin: main.o customer.o store.o options.o desktop.o order.o mainwin.o entrydialog.o ram.o cpu.o disk.o
	$(CXX) $(CXXFLAGS) main.o customer.o store.o options.o desktop.o order.o mainwin.o entrydialog.o ram.o cpu.o disk.o $(GTKFLAGS) -o store

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS) -o main.o

customer.o: customer.cpp *.h
	$(CXX) $(CXXFLAGS) -c customer.cpp $(GTKFLAGS) -o customer.o

store.o: store.cpp *.h
	$(CXX) $(CXXFLAGS) -c store.cpp $(GTKFLAGS) -o store.o

options.o: options.cpp *.h
	$(CXX) $(CXXFLAGS) -c options.cpp $(GTKFLAGS) -o options.o
	
desktop.o: desktop.cpp *.h
	$(CXX) $(CXXFLAGS) -c desktop.cpp $(GTKFLAGS) -o desktop.o
	
order.o: order.cpp *.h
	$(CXX) $(CXXFLAGS) -c order.cpp $(GTKFLAGS) -o order.o

mainwin.o: mainwin.cpp *.h
	$(CXX) $(CXXFLAGS) -c mainwin.cpp $(GTKFLAGS) -o mainwin.o
	
entrydialog.o: entrydialog.cpp *.h
	$(CXX) $(CXXFLAGS) -c entrydialog.cpp $(GTKFLAGS) -o entrydialog.o

ram.o: ram.cpp *.h
	$(CXX) $(CXXFLAGS) -c ram.cpp $(GTKFLAGS) -o ram.o
	
cpu.o: cpu.cpp *.h
	$(CXX) $(CXXFLAGS) -c cpu.cpp $(GTKFLAGS) -o cpu.o
	
disk.o: disk.cpp *.h
	$(CXX) $(CXXFLAGS) -c disk.cpp $(GTKFLAGS) -o disk.o
			
clean:
	rm -f *.o *.gch a.out store
