CC := g++
CFLAGS := -Wall -Wextra -std=c++11

SRC := Array.cpp Main.cpp
OBJ := $(SRC:.cpp=.o)
TARGET := Array

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
