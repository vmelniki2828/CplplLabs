# Makefile для лабораторної роботи №2
#
# Оголошення виконавчого файлу, зв'язків
# з об'єктними файлами і його лінкування;
lab2: main.o libStudent.so
	g++ -o lab2 main.o -L. -lStudent -Wl,-rpath,.
# Оголошення об'єктного файлу main.cpp і його лінкування
main.o: main.cpp
	g++ -c main.cpp
# Оголошення об'єктного файлу lib.cpp і його лінкування
libStudent.so: lib.o
	g++ -shared -o libStudent.so lib.o
lib.o: lib.cpp
	g++ -c -fPIC lib.cpp
# Очищення файлів з роширенням .о в поточній папці
# після створення виконавчого файлу
clean:
	rm -rf *.o *.so lab2
