namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char dataBuffer[100] = "";
    data = dataBuffer;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    {
        WSADATA wsaData;
        BOOL wsaDataInit = FALSE;
        SOCKET listenSocket = INVALID_SOCKET;
        SOCKET acceptSocket = INVALID_SOCKET;
        struct sockaddr_in service;
        int recvResult;
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            listenSocket = socket(PF_INET, SOCK_STREAM, 0);
            if (listenSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = INADDR_ANY;
            service.sin_port = htons(LISTEN_PORT);
            if (SOCKET_ERROR == bind(listenSocket, (struct sockaddr*)&service, sizeof(service)))
            {
                break;
            }
            if (SOCKET_ERROR == listen(listenSocket, LISTEN_BACKLOG))
            {
                break;
            }
            acceptSocket = accept(listenSocket, NULL, NULL);
            if (acceptSocket == INVALID_SOCKET)
            {
                break;
            }
            recvResult = recv(acceptSocket, data, 100 - 1, 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            data[recvResult] = '\0';
        }
        while (0);
        if (acceptSocket != INVALID_SOCKET)
        {
            closesocket(acceptSocket);
        }
        if (listenSocket != INVALID_SOCKET)
        {
            closesocket(listenSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    if (!SetComputerNameA(data))
<END>
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}
}
