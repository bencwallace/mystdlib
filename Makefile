SRCDIR=src

all:
	+$(MAKE) -C $(SRCDIR) $@

%:
	+$(MAKE) -C $(SRCDIR) $@