CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./include #-fsanitize=address -fsanitize=undefined
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
SRCDIR = src
OBJDIR = obj
SOURCES := $(wildcard $(SRCDIR)/*.cpp)
OBJECTS := $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))
BINDIR = .
EXECUTABLE = $(BINDIR)/quizMaker
MEDIA_PATH = ./files/

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LFLAGS) -o $@ $^ -L$(MEDIA_PATH)

./obj/%.o: ./src/%.cpp
	mkdir -p ./obj
	$(CXX) $(CXXFLAGS) $(LFLAGS) -c $< -o $@ -I$(MEDIA_PATH)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(LFLAGS) -c $< -o $@ -I$(MEDIA_PATH)

clean:
	rm -rf $(OBJDIR)/*.o $(EXECUTABLE)