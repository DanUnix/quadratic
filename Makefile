quad:
	gcc quad.c -lm -o quad

debug:
	gcc -g quad.c -lm

clean:
	rm quad
