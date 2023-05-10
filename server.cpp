#include <http_tcpServer.h>

int main() {
    using namespace http;
    TCPServer server = TCPServer("0.0.0.0", 8080);

    return 0;
}