# Makefile для лабораторної роботи №2
Klab2: main.o libStudent.a
	g++ -o Klab2 main.o -L. -lStudent
# Оголошення об'єктного файлу main.cpp і його лінкування
main.o: main.cpp
	g++ -c main.cpp
# Оголошення об'єктного файлу lib.cpp і його лінкування
libStudent.a: lib.o
	ar cr libStudent.a lib.o
lib.o: lib.cpp
	g++ -c lib.cpp
# Очищення файлів з роширенням .о в поточній папці
# після створення виконавчого файлу
clean:
	rm -rf *.o *.a Klab2
