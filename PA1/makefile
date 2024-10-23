CC=gcc
CFLAGS=-I. -g -w
DEPS= pattern_finder.h
OBJ = pattern_finder.o is_palindrome.o is_singleton.o is_arithmetic.o is_reversearithmetic.o is_balancedtripartite.o is_balancedbipartite.o
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
pattern_finder: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)