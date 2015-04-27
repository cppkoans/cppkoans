CC=clang
CXX=clang++
CXXFLAGS=-std=c++11 -g -I.

DEPS=Box.h
OBJ=operatoroverloading.o
BOX_USERS=operatoroverloading

RM=rm -f

# compile only
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# link
operatoroverloading: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

clean:
	$(RM) $(OBJ)

uninstall:
	$(RM) $(TARGETS) $(BOX_USERS)
