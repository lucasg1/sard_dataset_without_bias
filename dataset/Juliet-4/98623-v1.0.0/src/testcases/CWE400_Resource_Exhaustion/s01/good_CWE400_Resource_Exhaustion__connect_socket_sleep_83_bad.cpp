namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(int countCopy)
{
    count = countCopy;
    count = 20;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int countCopy)
{
    count = countCopy;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        SOCKET connectSocket = INVALID_SOCKET;
        char inputBuffer[CHAR_ARRAY_SIZE];
        do
        {
            if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
            {
                break;
            }
            wsaDataInit = 1;
            connectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (connectSocket == INVALID_SOCKET)
            {
                break;
            }
            memset(&service, 0, sizeof(service));
            service.sin_family = AF_INET;
            service.sin_addr.s_addr = inet_addr(IP_ADDRESS);
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
            recvResult = recv(connectSocket, inputBuffer, CHAR_ARRAY_SIZE - 1, 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            inputBuffer[recvResult] = '\0';
            count = atoi(inputBuffer);
        }
        while (0);
        if (connectSocket != INVALID_SOCKET)
        {
            CLOSE_SOCKET(connectSocket);
        }
        if (wsaDataInit)
        {
            WSACleanup();
        }
    }
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    int count;
    count = -1;
    NAMESPACE0_FUN0 VAR3(count);
}
void FUN1()
{
    int count;
    count = -1;
    NAMESPACE0_FUN1 VAR4(count);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int countCopy);
    ~NAMESPACE0_FUN0();
private:
    int count;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int countCopy);
    ~NAMESPACE0_FUN1();
private:
    int count;
};
}
