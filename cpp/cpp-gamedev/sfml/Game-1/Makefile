LDFLAGS=-lcurses

all: compile run

compile:
	g++ ./src/main.cpp -I/opt/homebrew/Cellar/sfml/2.6.1/include -o ./bin/app -L/opt/homebrew/Cellar/sfml/2.6.1/lib -lsfml-graphics -lsfml-window -lsfml-system

run:
	./bin/app


