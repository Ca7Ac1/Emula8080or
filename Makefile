CC = g++
CXXFLAGS = -std=c++17 
OUT = emulator.exe
SRC = src
BIN = bin
OBJS = main.o emulator.o disassembler.o state.o
HEADERS = $(SRC)/emulator.hpp $(SRC)/disassembler.hpp $(SRC)/state.hpp

all: compile
	./$(OUT)

compile: $(OBJS)
	$(CC) $(CXXFLAGS) -o $(OUT) $(OBJS) && mkdir -p bin && mv *.o $(BIN)/

main.o: $(SRC)/main.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c $(SRC)/main.cpp

emulator.o: $(SRC)/emulator.cpp $(HEADERS) 
	$(CC) $(CXXFLAGS) -c $(SRC)/emulator.cpp

disassembler.o: $(SRC)/disassembler.cpp $(HEADERS) 
	$(CC) $(CXXFLAGS) -c $(SRC)/disassembler.cpp	

state.o: $(SRC)/state.cpp $(HEADERS) 
	$(CC) $(CXXFLAGS) -c $(SRC)/state.cpp	

clean: 
	rm -f $(BIN)/*
	rm -f $(OUT)
