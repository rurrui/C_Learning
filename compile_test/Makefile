test:test.o
	gcc test.o -o test
sum.o:sum.c
	gcc -c sum.c
test.o:test.c sum.o
	gcc  -c test.c sum.o
