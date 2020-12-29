# Makefile для лабораторної роботи №2
# Робота виконана студентами групи ІТ-83 Мельником Владиславом Білоусом Максимом


lab2: main.o libStudent.so
	g++ -o lab2 main.o -L. -lStudent -Wl,-rpath,.

main.o: main.cpp
	g++ -c main.cpp

libStudent.so: lib.o
	g++ -shared -o libStudent.so lib.o
lib.o: lib.cpp
	g++ -c -fPIC lib.cpp

clean:
	rm -rf *.o *.so lab2
