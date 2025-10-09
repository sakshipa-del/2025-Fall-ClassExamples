All: NumCoins.o NumCoins

NumCoins.o: NumCoins.cpp
	g++ -c NumCoins.cpp -o NumCoins.o

NumCoins: NumCoins.o
	g++ NumCoins.o -o NumCoins	

run: NumCoins
	./NumCoins

test: NumCoins
	rm -f test.out
	touch test.out
	./NumCoins < TestCases >> test.out;

clean:
	rm -f NumCoins.o NumCoins