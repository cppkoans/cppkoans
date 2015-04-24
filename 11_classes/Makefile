CC=clang
CXX=clang++
CXXFLAGS=-std=c++11 -g -I.

DEPS=Box.h
OBJ=friend.o Box.o
TARGET=friend

TARGETS=constructor constructoroutside constructorinitlist explicit delegating accessprivatemembers arraysofobjects

RM=rm -f

# compile only
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# link
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

all: $(TARGETS)

clean:
	$(RM) $(OBJ)

uninstall:
	$(RM) $(TARGETS) $(TARGET)
