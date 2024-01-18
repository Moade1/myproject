all: clean bin/cRace

bin/cRace: bin/main.o bin/WareHouse.o
	g++ -o bin/cRace bin/main.o bin/WareHouse.o

bin/main.o: src/main.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/main.o src/main.cpp

bin/WareHouse.o: src/WareHouse.cpp
	g++ -g -Wall -Weffc++ -std=c++11 -c -Iinclude -o bin/WareHouse.o src/WareHouse.cpp

clean:
	rm -f bin/*
