CC=g++

main.exe : main.o initfunc.o
	$(CC) -o main main.o initfunc.o
main.o : main.cpp MyClass.h
	$(CC) -c main.cpp
initfunc.o : initfunc.cpp MyClass.h
	$(CC) -c initfunc.cpp	