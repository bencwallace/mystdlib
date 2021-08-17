CC=g++
CCFLAGS = -I. -std=c++11 -pedantic -Wall -Wextra


all: list stream string

%: %_test.cpp
	$(CC) $(CCFLAGS) -o $@_test $<

%.o: %.h %.tpp
	$(CC) $(CCFLAGS) -c -o $@ $<

.PHONY: clean test

clean: array-clean list-clean stream-clean string-clean

array-clean:
	rm -rf array.o array_test

list-clean:
	rm -rf list.o list_test

stream-clean:
	rm -rf stream.o stream_test

string-clean:
	rm -rf string.o string_test

test: list-test stream-test string-test

%-test: %_test
	./$<
