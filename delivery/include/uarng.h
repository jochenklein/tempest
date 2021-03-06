#pragma once
#ifdef _WIN32

#include <stdint.h>
#include <cryptopp/cryptlib.h>
#include <cryptopp/secblock.h>
/**
  \brief User-assisted random number generator.
*/
class UARNG
{
public:
	UARNG();

	bool generate(CryptoPP::SecByteBlock& s);

	~UARNG();
};

#endif