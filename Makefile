CXX=g++
CXXFLAGS=-std=c++11
OBJ=game.o
SRC=game.cpp
EXE=test
all: $(EXE)
$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)
clean:
	rm -f $(EXE)
	rm -f $(OBJ)
