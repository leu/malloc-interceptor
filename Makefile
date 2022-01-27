all: malloc.so

malloc.so: malloc.c
	gcc -shared -fPIC -o malloc.so malloc.c

clean:
	rm -f malloc.so malloc.o
