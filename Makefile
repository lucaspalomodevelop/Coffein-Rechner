all:
	g++ --std=c++17 -v main.cpp main.hpp -o coffein
clean:
	rm -v coffein
install:
	sudo cp -v coffein /usr/bin/coffein
uninstall:
	sudo rm -v /usr/bin/coffein
