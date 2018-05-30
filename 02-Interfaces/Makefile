CFLAGS = -std=c11 -Wall

RM := rm -rf

BIN      = TablasDeConversion ConversionTest
OBJ      = Conversion.o TablasDeConversion.o ConversionTest.o

.PHONY: all clean run test

all: $(BIN)

run: TablasDeConversion 
	./TablasDeConversion

test: ConversionTest
	./ConversionTest

TablasDeConversion: Conversion.o

ConversionTest: ConversionTest.o

TablasDeConversion.o: Conversion.h

ConversionTest.o: Conversion.h

Conversion.o: Conversion.h

clean: 
	$(RM) $(BIN) $(OBJ)
