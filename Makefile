CC=g++
CCFLAGS=-I.
DEPS="*.h *.tpp"

SRCDIR=src
LISTDIR=$(SRCDIR)/list
STRINGDIR=$(SRCDIR)/string


all: list string

list:
	+$(MAKE) CC=$(CC) CCFLAGS=$(CCFLAGS) DEPS=$(DEPS) -C $(LISTDIR)

string:
	+$(MAKE) CC=$(CC) CCFLAGS=$(CCFLAGS) DEPS=$(DEPS) -C $(STRINGDIR)

clean: clean-list clean-string

clean-list:
	+$(MAKE) -C $(LISTDIR) clean

clean-string:
	+$(MAKE) -C $(STRINGDIR) clean

test: test-list test-string

test-list:
	+$(MAKE) -C $(LISTDIR) test

test-string:
	+$(MAKE) -C $(STRINGDIR) test
