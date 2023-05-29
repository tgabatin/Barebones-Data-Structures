CC := g++
CFLAGS := -Wall -Wextra -std=c++11

SRC := Stacks.cpp Main.cpp
OBJ := $(SRC:.cpp=.o)
TARGET := Stack

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
