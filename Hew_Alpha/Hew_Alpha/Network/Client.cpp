#include "Client.h"

Client::Client()
{

}

bool Client::Set()
{
	// 接続先指定用構造体の準備
	server.sin_family = AF_INET;
	server.sin_port = htons(12345);
	server.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	return true;
}

int Client::Connection()
{
	connect(sock, (struct sockaddr *)&server, sizeof(server));
	return 0;
}
