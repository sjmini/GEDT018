CC=clang++
CXXFLAGS=-W -Wall

PWD=$(shell pwd)
TARGET=$(shell basename $(PWD))

all: $(TARGET)

SRCS=$(wildcard *.cc)	# all src files
OBJS=$(SRCS:.c=.o)	# all obj files

$(TARGET): $(OBJS)
	$(CC) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf *.o $(TARGET) 

