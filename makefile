CC = gcc
XX = g++
TARGET = design_pattern
LINK = $(XX)
PROGRAM_DIR = .

INCLUDE = -I$(PROGRAM_DIR)/include


SRC = $(wildcard $(PROGRAM_DIR)/src/*.cpp)
OBJ = $(patsubst %.cpp,%.o,$(SRC))

CFLAGS = -Wall -g $(INCLUDE) -std=c++11
CPPFLAGS = $(CFLAGS)
RM = rm

$(TARGET): $(OBJ)
	@echo "Begin to build..."
	$(LINK) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.cpp
	$(XX) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf src/*.o design_pattern