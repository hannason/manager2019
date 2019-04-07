
CC = gcc
CFlags = -W -Wall
TARGET = manager
OBJECT = menu.o user.o main.o

all : $(TARGET)

$(TARGET) : $(OBJECT)
	$(CC) $(CFlags) -o $@ $^

clean:
	rm *.p manager
