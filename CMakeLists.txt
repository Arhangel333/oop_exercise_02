all: oop_exercise_02

oop_exercise_02: main.o Budget.o 
	g++ main.o Budget.o -o oop_exercise_02

main.o: main.cpp
	g++ -c main.cpp

Budget.o: Budget.cpp
	g++ -c Budget.cpp

clean:
	rm -rf *.o oop_exercise_02