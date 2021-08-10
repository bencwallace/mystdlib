OBJS=string.o
EXEC=string

all: $(OBJS)
	$(CC) $(CCFLAGS) -o $(EXEC) $(OBJS)

%.o: %.cpp $(DEPS)
	$(CC) $(CCFLAGS) -c -o $@ $<

.PHONY: clean test

clean:
	rm -rf *.o $(EXEC)

test:
	./$(EXEC)
