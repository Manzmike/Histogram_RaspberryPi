prog1.exe : main.o SSI.o
	g++ main.o SSI.o -o prog1

main.o : main.cpp SSI.h
	g++ -c main.cpp

SSI.o : SSI.cpp SSI.h
	g++ -c SSI.cpp
	
	
clean :
	rm *.o
	rm prog1
