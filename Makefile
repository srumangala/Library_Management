# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall

# Source files
SRCS = main.cpp Book.cpp User.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = my_program

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
