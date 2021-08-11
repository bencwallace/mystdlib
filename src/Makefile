CC=g++
CCFLAGS = -I. -std=c++11


%: %_test.cpp
	$(CC) $(CCFLAGS) -o $@_test $<

%.o: %.h %.tpp
	$(CC) $(CCFLAGS) -c -o $@ $<

.PHONY: clean test

clean: list-clean stream-clean string-clean

list-clean:
	rm -rf list.o list_test

stream-clean:
	rm -rf stream.o stream_test

string-clean:
	rm -rf string.o string_test

test: list-test stream-test string-test

%-test: %_test
	./$<
