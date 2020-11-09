CXX 		:= g++
CXXFLAGS := -std=c++17 -ggdb -fsanitize=address

BIN 		:= bin
SRC 		:= src
INCLUDE	:= Include

LIBRARIES   	:=
EXECUTABLE 		:= main

OBJ = $(SRC:.cc=.o)

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
		-rm $(BIN)/*