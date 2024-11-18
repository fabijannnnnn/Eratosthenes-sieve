CXX = g++
CXXFLAGS = -std=c++20
TARGET = main.cpp

main:
	$(CXX) $(CXXFLAGS) $(TARGET) -o sieve
	./sieve

clean:
	rm -f sieve*
