all: blackjack clean exe

game.o: game.h game.cpp shoe.o hand.o player.o
	g++ game.cpp shoe.cpp hand.c player.c -c

player.o: player.h player.cpp
	g++ player.cpp -c

card.o: card.h card.cpp
	g++ card.cpp -c

shoe.o: shoe.h shoe.cpp card.o
	g++ shoe.cpp card.o -c

blackjack: card.o shoe.o main.cpp
	g++ main.cpp card.o shoe.o -o blackjack -lstdc++

clean:
	rm *.o

exe:
	./blackjack