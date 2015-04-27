CC=clang
CXX=clang++
CXXFLAGS=-std=c++11 -g -I.

DEPS=Box.h
OBJ=operatoroverloading.o
BOX_USERS=operatoroverloading

DEPS2=FullBox.h
OBJ2=operatoroverloadingfull.o
BOX_USERS2=operatoroverloadingfull

RM=rm -f

# compile only
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# link
operatoroverloading: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

# compile only
%.o: %.cpp $(DEPS2)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# link
operatoroverloadingfull: $(OBJ2)
	$(CXX) -o $@ $^ $(CXXFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ2)

uninstall:
	$(RM) $(TARGETS) $(BOX_USERS) $(BOX_USERS2)
