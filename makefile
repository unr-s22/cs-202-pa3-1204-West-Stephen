pa3: main.o Money.o Account.o
	g++ -o calc main.o Money.o Account.o

Money.o:Money.h Money.cpp
	g++ -c Money.cpp

Account.o: Account.h  Account.cpp
	g++ -c Account.cpp

main.o: Account.h Money.h main.cpp
	g++ -c main.cpp

clean: 
	rm *.o pa3

