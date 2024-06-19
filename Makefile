clean:
	rm -rf build install

clean-logs:
	rm -rf log

clean-all: clean clean-logs

build: src/main.cpp
	bash -c scripts/cmake-build.sh

build-debug:
	bash -c scripts/cmake-build-debug.sh

run:
	./build/main/main