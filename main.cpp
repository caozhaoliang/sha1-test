# include <iostream>
# include "sha1.h"


using namespace std;

using namespace tsbase;

int main(int argc, char const *argv[])
{
	SHA1 sha;
	SHA1 sh2;
	char buffer[64] = {0};
	char buffer2[64] = {0};
	sha.Encode2Hex("sha1_str",buffer);
	sh2.Encode2Hex("sha1_str ",buffer2);

	cout<< "buffer:"<<buffer<<endl;
	cout<< "buffer2:"<<buffer2<<endl;


	return 0;
}
