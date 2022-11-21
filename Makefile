CC = gcc
AR = ar 
FLAGS = -Wall -g 


all: loops recursived recursives loopd mains maindloop maindrec 

loops: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

recursives: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

recursived: basicClassification.o advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

loopd: basicClassification.o advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so  basicClassification.o advancedClassificationLoop.o

mains: main.o
	if [ ! -f libclassrec.a ]; \
    then \
		make recursives; \
	fi
	$(CC) $(FLAGS) -o mains main.o libclassrec.a 

maindloop: main.o
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so

maindrec: main.o
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so

main.o: main.c NumClass.h 
	$(CC) $(FLAGS) -c main.c 

basicClassification.o: basicClassification.c NumClass.h
		$(CC) $(FLAGS) -c basicClassification.c 

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
		$(CC) $(FLAGS) -c advancedClassificationLoop.c 

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
		$(CC) $(FLAGS) -c advancedClassificationRecursion.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
