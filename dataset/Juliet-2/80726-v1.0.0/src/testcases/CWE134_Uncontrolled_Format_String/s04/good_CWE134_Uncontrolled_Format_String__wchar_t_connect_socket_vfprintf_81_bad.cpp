namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN0();
    baseObject.action(data);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        int recvResult;
        struct sockaddr_in service;
        wchar_t *replace;
        SOCKET connectSocket = INVALID_SOCKET;
        size_t dataLen = wcslen(data);
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
            recvResult = recv(connectSocket, (char *)(data + dataLen), sizeof(wchar_t) * (100 - dataLen - 1), 0);
            if (recvResult == SOCKET_ERROR || recvResult == 0)
            {
                break;
            }
            data[dataLen + recvResult / sizeof(wchar_t)] = L'\0';
            replace = wcschr(data, L'\r');
            if (replace)
            {
                *replace = L'\0';
            }
            replace = wcschr(data, L'\n');
            if (replace)
            {
                *replace = L'\0';
            }
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
    const NAMESPACE0_base& baseObject = NAMESPACE0_FUN1();
    baseObject.action(data);
}
} 
namespace NAMESPACE0
{
void FUN3(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, data, args);
        va_end(args);
    }
}
void NAMESPACE0_FUN0::action(wchar_t * data) const
{
    FUN3(data, data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(wchar_t * data) const = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
class NAMESPACE0_FUN1 : public NAMESPACE0_base
{
public:
    void action(wchar_t * data) const;
};
}
namespace NAMESPACE0
{
void FUN4(wchar_t * data, ...)
{
    {
        va_list args;
        va_start(args, data);
        vfwprintf(stdout, L"%s", args);
        va_end(args);
    }
}
void NAMESPACE0_FUN1::action(wchar_t * data) const
{
    FUN4(data, data);
}
}
