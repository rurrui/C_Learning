test:test.o get_x_y.o
	gcc test.o get_x_y.o -o test -lm
test.o:test.c get_x_y.h
	gcc -c test.c get_x_y.h
get_x_y.o:get_x_y.c get_x_y.h
	gcc -c get_x_y.c get_x_y.h
