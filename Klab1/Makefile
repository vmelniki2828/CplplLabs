# Makefile для лабораторної роботи №1
# Робота виконана студентами групи ІТ-83 Мельником Владиславом Білоусом Максимом

Klab1: main.o lib.o
	g++ -o Klab1 main.o lib.o

main.o: main.cpp
	g++ -c main.cpp

lib.o: lib.cpp
	g++ -c lib.cpp

clean:
	rm -rf *.o Klab1
