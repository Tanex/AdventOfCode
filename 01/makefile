.DEFAULT_GOAL := build
OUTPUT_DIR = ./bin/

setup:
	mkdir ${OUTPUT_DIR}

build: setup main.cpp
	g++ main.cpp -o ${OUTPUT_DIR}main.out

run: build
	${OUTPUT_DIR}main.out

clean:
	rm -rf ${OUTPUT_DIR}
