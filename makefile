run: main clean
	./main

main: main.o Vector.o
	gcc Vector.o main.c -o main

Vector.o: Vector.c
	gcc Vector.c -c

clean:
	rm -rf *.o
