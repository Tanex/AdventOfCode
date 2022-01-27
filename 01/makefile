.DEFAULT_GOAL := build
OUTPUT_DIR = ./bin/

setup:
	mkdir -p ${OUTPUT_DIR}

build: setup main.cpp file_reader.cpp
	g++ main.cpp file_reader.cpp -o ${OUTPUT_DIR}main.out

run: build
	${OUTPUT_DIR}main.out

clean:
	rm -rf ${OUTPUT_DIR}
