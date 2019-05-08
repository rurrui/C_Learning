test:arithmetic.o  fabricate.o  get_x_y.o  test.o
	gcc test.o arithmetic.o fabricate.o get_x_y.o -o test -lm
test.o:test.c  common.h arithmetic.h fabricate.h get_x_y.h
	gcc -c test.c  common.h  get_x_y.h fabricate.h arithmetic.h
arithmetic.o:arithmetic.c common.h  fabricate.h get_x_y.h
	gcc -c arithmetic.c common.h  fabricate.h get_x_y.h
fabricate.o:fabricate.c  common.h get_x_y.h
	gcc -c fabricate.c common.h get_x_y.h
get_x_y.o:get_x_y.c common.h
	gcc -c get_x_y.c common.h
