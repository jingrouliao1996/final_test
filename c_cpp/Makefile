result:main my_stack
	gcc main.o my_stack.o -o result

main: main_clean main.c
	gcc -c -O0 main.c
main_optimize: main_clean main.c
	gcc -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi
	

my_stack: my_stack_clean my_stack.c
	gcc -c -O0 my_stack.c
my_stack_optimize: my_stack_clean my_stack.c
	gcc -c -O2 my_stack.c
my_stack_clean:
	if [ -e my_stack.o ] ; then rm my_stack.o ; fi
	

release: main_optimize my_stack_optimize
	gcc main.o my_stack.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o
