CC=g++

all: unittest_regex main

unittest_regex: unittest_regex.o regex.o unittest_core.o

main: main.o regex.o

clean:
	$(RM) *.o unittest_regex main

test:
	./unittest_regex
