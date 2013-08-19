CC=gcc
BINARY=psh.bin

default: psh_main.o parse_args.o execute.o builtin.o
	$(CC) -o $(BINARY) $^

psh_main.o: psh_main.c
	$(CC) -c $<

parse_args.o: parse_args.c parse_args.h
	$(CC) -c $<

execute.o:  execute.c execute.h
	$(CC) -c $<

builtin.o: builtin.c builtin.h
	$(CC) -c $<


