test:
	cd tests && make test
	cd tests && make test-web

doc: build-doxygen-xml
	doxygen
	cd doc && make html

build-doxygen-xml:
	./third-party/doxygen/build/bin/doxygen Doxyfile

travis: 
	cd third-party && bash install_emscripten.sh
	cd third-party && make install-npm-deps
	make test

install-dependencies:
	git submodule init
	git submodule update
	cd third-party && make

install-testing-dependencies:
	cd third-party && make install-testing-dependencies

clean:
	rm -rf build/*
	cd tests && make clean
clean-dep:
	cd third-party && make clean
