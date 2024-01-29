CC = g++
CFLAGS = -Wall
SRCDIR = ./src
INCDIR = ./inc
BINDIR = .

# Find all .cpp
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Obj dir
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(SOURCES))

# output exe
TARGET = main

# Run

run: build
	$(TARGET)

# Compile
build: $(TARGET)

$(TARGET): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -I$(INCDIR) -c -o $@ $<

clean:
	@rm -f $(TARGET) $(OBJECTS)

