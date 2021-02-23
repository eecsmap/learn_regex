CC=g++

all: unittest_regex

unittest_regex: unittest_regex.o regex.o

clean:
	$(RM) *.o unittest_regex

test:
	./unittest_regex
