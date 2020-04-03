all: a

CC:=g++
CFLAGS:=-std=c++11
exe:=a
obj:=main.o trie.o

a: $(obj)
	$(CC) $(CFLAGS) -o $(exe) $(obj)
main.o: main.cpp trie.cpp trie.h
	$(CC) $(CFLAGS) -c main.cpp
trie.o: trie.cpp trie.h
	$(CC) $(CFLAGS) -c trie.cpp

.PHONY: clean
clean:
	rm -rf $(obj)

