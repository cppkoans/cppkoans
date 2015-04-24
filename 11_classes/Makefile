CC=clang
CXX=clang++
CXXFLAGS=-std=c++11 -g -I.

DEPS=Box.h
OBJ=friend.o Box.o
OBJ2=mutatorthis.o Box.o
BOX_USERS=friend mutatorthis

TARGETS=constructor constructoroutside constructorinitlist explicit delegating accessprivatemembers arraysofobjects

RM=rm -f

# compile only
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# link
friend: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

# link
mutatorthis: $(OBJ2)
	$(CXX) -o $@ $^ $(CXXFLAGS)

all: $(TARGETS)

clean:
	$(RM) $(OBJ) $(OBJ2)

uninstall:
	$(RM) $(TARGETS) $(BOX_USERS)
