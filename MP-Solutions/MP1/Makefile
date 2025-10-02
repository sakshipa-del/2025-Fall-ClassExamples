All: CoinAmounts.o CoinAmounts

CoinAmounts.o: CoinAmounts.cpp
	g++ -c CoinAmounts.cpp 

CoinAmounts: CoinAmounts.o
	g++ CoinAmounts.o -o CoinAmounts	

run: CoinAmounts
	./CoinAmounts

test: CoinAmounts
	rm test.out
	touch test.out
	@while IFS= read -r line; do \
	    echo "$$line" | ./CoinAmounts >> test.out; \
	done < TestCases

clean:
	rm -f CoinAmounts.o CoinAmounts