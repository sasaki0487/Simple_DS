all: a

CC:=g++
CFLAGS:=-std=c++11
exe:=a
obj:=main.o vec.o

a: $(obj)
	$(CC) $(CFLAGS) -o $(exe) $(obj)
main.o: main.cpp vec.cpp vec.h
	$(CC) $(CFLAGS) -c main.cpp
vec.o: vec.cpp vec.h
	$(CC) $(CFLAGS) -c vec.cpp

.PHONY: clean
clean:
	rm -rf $(obj)

