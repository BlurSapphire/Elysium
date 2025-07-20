.PHONY: build

CC = g++
CFLAGS = -g -std=c++17
LDFLAGS = -lglfw -lGL -lX11 -lpthread -lXrandr -lXi -ldl
TARGET = bin/ElysiumEngine
SRCS = src/core/Engine.cpp src/core/window.cpp

all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p $(dir $(TARGET))
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

del:
	rm -f $(TARGET)