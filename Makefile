OBJS = dev/src/main.cpp
CC = g++
CFLAGS = -Wall
LFLAGS = -lSDL2
BUILD = bin
INCS = dev/inc/

BIN = $(BUILD)/app

all:$(OBJS)
	mkdir -p bin/
	$(CC) -o $(BIN) -I$(INCS) $(OBJS) $(CFLAGS) $(LFLAGS)

clean:
	rm -rf $(BUILD)
