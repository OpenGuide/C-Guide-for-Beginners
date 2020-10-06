#
#simple makefile with only explicyt rules  
#

TARGET= a.out
$(TARGET): main.o function1.o function2.o
	gcc -o $(TARGET) main.o function1.o function2.o 

main.o: main.c
	gcc -c main.c

function1.o: function1.c  function1.h 
	gcc -c function1.c

function2.o: function2.c  function2.h 
	gcc -c function2.c

