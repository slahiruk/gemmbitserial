#include <iostream>
#include "gemmaltserial.hpp"
#include "testhelpers.hpp"
#include <cstdio>

//using namespace gemmbitserial;
namespace ags = gemmbitserial;
using namespace  std;


int main(){

	typedef ags::RowInterleavedBitSerialMatrix RIBSM;

	RIBSM rbsm;
	cout <<"created";

	size_t nrows_lhs = 2;
	size_t nrows_rhs = 2;
	size_t ncols = 2;
	size_t nbits_lhs = 3;
	size_t nbits_rhs = 3;
	bool sgn_lhs = false;
	bool sgn_rhs = false;
	uint8_t * lhs = new uint8_t[nrows_lhs * ncols];
	uint8_t * rhs = new uint8_t[nrows_rhs * ncols];


	for(int itrt = 0; itrt <= (2^nbits_lhs) -(nrows_lhs *ncols + 2) ;itrt++ ){	
		for(int mitr= 0; mitr <= nrows_lhs * ncols;  mitr++){
			lhs[mitr]=mitr+itrt;
		}


	rbsm = RIBSM::alloc(nbits_lhs,nrows_lhs,ncols,sgn_lhs);
	printf("Words per bit %ul \n",rbsm.wordsPerBit());
	printf("Words per rowplane %ul \n",rbsm.wordsPerRowplane());
	printf("testoutput");
	rbsm.importRegular_naive(lhs);
	RIBSM::dealloc(rbsm);

	}
	
		//	for
//	printf("",)


	return 0;




}
