CC := g++
CFLAGS := -Wall -Wextra -std=c++11

SRC := LinkedList.cpp Main.cpp
OBJ := $(SRC:.cpp=.o)
TARGET := LinkedList

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
