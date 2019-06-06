
# compile gemmbitserial library and test helpers as .so for 
# cling usage

.PHONY: libs gembi agembi testhelp clean


libs: gembi testhelp

alibs: agembi testhelp

gembi:
	g++ gemmbitserial.hpp -shared -fpic -x c++ -o gemmbitserial.so

agembi:
	g++ gemmaltserial.hpp -shared -fpic -x c++ -o gemmaltserial.so

testhelp:
	cd test; g++ testhelpers.hpp -shared -fpic -x c++ -o testhelpers.so; cp testhelpers.so ../

clean:
	rm -rf *.so
	rm testing

testing:
	g++ testing.cpp -o testing -g

