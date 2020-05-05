# Makefile

# the C++ compiler
CXX = g++

# options to pass to the compiler
CXXFLAGS = -std=c++11

in ?=

out = $(in:.cpp=.out)


build:
	@echo $^
	$(CXX) $(CXXFLAGS) $(in) -o $(out)


clean:
	@rm -f *.out
