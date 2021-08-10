CC=g++
CCFLAGS=-I.
DEPS="*.h *.tpp"

SRCDIR=src
LISTDIR=$(SRCDIR)/list
STRINGDIR=$(SRCDIR)/string
STREAMDIR=$(SRCDIR)/stream


all: list stream string

list:
	+$(MAKE) CC=$(CC) CCFLAGS=$(CCFLAGS) DEPS=$(DEPS) -C $(LISTDIR)

stream:
	+$(MAKE) CC=$(CC) CCFLAGS=$(CCFLAGS) DEPS=$(DEPS) -C $(STREAMDIR)

string:
	+$(MAKE) CC=$(CC) CCFLAGS=$(CCFLAGS) DEPS=$(DEPS) -C $(STRINGDIR)

clean: clean-list clean-stream clean-string

clean-list:
	+$(MAKE) -C $(LISTDIR) clean

clean-stream:
	+$(MAKE) -C $(STREAMDIR) clean

clean-string:
	+$(MAKE) -C $(STRINGDIR) clean

test: test-list test-stream test-string

test-list:
	+$(MAKE) -C $(LISTDIR) test

test-stream:
	+$(MAKE) -C $(STREAMDIR) test

test-string:
	+$(MAKE) -C $(STRINGDIR) test
