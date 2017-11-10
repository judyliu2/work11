all: main.c
	gcc -o strsep_test main.c	
run: all
	./strsep_test
