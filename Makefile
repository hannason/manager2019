D_OPION = -DDEBUG_MODE
CC = gcc
CFlags = -W -Wall
TARGET = manager
OBJECT = menu.o user.o main.o
D_TARGET = manager_d
D_OBJECT = menu_d.o user_d.o main_d.o

all : $(TARGET)

$(TARGET) : $(OBJECT)
	$(CC) $(CFlags) -o $@ $^

$(D_TARGET) : $(D_OBJECT)
	$(CC) $(CFlags) -o $@ $^

user_d.o : user.c
	$(CC) $(D_OPTION) -c -o user_d.o user.c

menu_d.o : menu.c
	$(CC) $(D_OPTION) -c -o menu_d.o menu.c

main_d.o : main.c
	$(CC) $(D_OPTION) -c -o main_d.o main.c

clean:
	rm *.p manager_d
