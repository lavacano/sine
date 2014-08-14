CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o sine main.c
stable:clean
	$(CC) $(CFLAGS) -o sine main.c
clean:
	rm -vfr *~ sine
