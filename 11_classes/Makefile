CC=clang
CXX=clang++
CXXFLAGS=-std=c++11 -g -I.

#DEPS=compare.h
OBJ=box.o

TARGETS=constructor

RM=rm -f

# usecompare
# compile only
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# usecompare
# link
box: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

constructor: $(TARGETS)

TARGETS=constructor

clean:
	$(RM) $(OBJ) $(TARGETS)
