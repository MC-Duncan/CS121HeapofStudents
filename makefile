heapStudents: main.o date.o address.o student.o
	g++ -g main.o address.o student.o -o heapStudents

main.o: main.cpp date.h
	g++ -g -c main.cpp

date.o: date.h date.cpp
	g++ -g -c date.cpp

address.o: address.h address.cpp
	g++ -g -c address.cpp

run: heapStudents
	./heapStudents

clean:
	rm heapStudents
	rm *.o

debug: heapStudents
	gdb heapStudents

valgrind: heapStudents
	valgrind --leak-check=full ./heapStudents
