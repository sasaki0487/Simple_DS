all: a

CC:=g++
CFLAGS:=-std=c++11
exe:=a
obj:=main.o ll.o

a: $(obj)
	$(CC) $(CFLAGS) -o $(exe) $(obj)
main.o: main.cpp ll.cpp ll.h
	$(CC) $(CFLAGS) -c main.cpp
ll.o: ll.cpp ll.h
	$(CC) $(CFLAGS) -c ll.cpp

.PHONY: clean
clean:
	rm -rf $(obj)

