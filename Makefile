CXX=g++
CXXFlags=-std=c++11 -o
Files=main.cpp
Objects=neuron.o

default: 
	$(CXX) $(CXXFlags) $(Objects) $(Files)

clean:
	rm -f $(Objects) *.out
