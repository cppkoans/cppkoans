CC=clang
CXX=clang++
CXXFLAGS=-std=c++11 -g -I.

DEPS=compare.h
OBJ=usecompare.o compare.o

TARGETS=code

RM=rm -f

# usecompare
# compile only
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# usecompare
# link
usecompare: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

# `make code` to make only the `code` program
code: $(TARGETS)

TARGETS=code

clean:
	$(RM) $(OBJ) $(TARGETS)
