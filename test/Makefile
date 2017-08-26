
OS=$(shell uname -s)
CPU=$(shell uname -m)
PLATFORM=$(OS)-$(CPU)

CFLAGS=--std=c++11 -Igtest/include -O0
LDFLAGS=gtest/lib/$(PLATFORM)/libgtest.a -lstdc++

CC=g++
ifeq ($(OS), Darwin)
	CC=clang
	CFLAGS+=-ObjC++
	LDFLAGS+=-framework Foundation
endif

all: tests-$(PLATFORM)

flags:
	@echo PLATFORM=$(PLATFORM)
	@echo CFLAGS=$(CFLAGS)
	@echo LDFLAGS=${LDFLAGS}

tests-$(PLATFORM): *.cpp
	$(CC) -o $@ ${CFLAGS} *.cpp ${LDFLAGS}

clean:
	rm -f ./tests ./tests-*
