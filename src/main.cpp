#include <iostream>
#include <vector>

#include <jsonrpccpp/server/connectors/httpserver.h>
#include <stdio.h>

//Include jsonrpc headers for different servers
#include "abstractstubserver.h"

// MeTA headers
#include "index/inverted_index.h"

using namespace jsonrpc;
using namespace std;
using namespace meta;


int main(int argc, string [] argv)
{
	if(argc < 3) {
		cerr << "Usage: ./meta-api-server class-server port" << endl;
		return 1;
	}
	HttpServer httpserver(8383);
	MyStubServer s(httpserver, JSONRPC_SERVER_V1V2); //hybrid server (json-rpc 1.0 & 2.0)
	s.StartListening();
	cout << "Hit enter to stop the server" << endl;
	getchar();

	s.StopListening();

	return 0;
}
