static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(staticTrue)
    {
        {
            WSADATA wsaData;
            int wsaDataInit = 0;
            int recvResult;
            struct sockaddr_in service;
            wchar_t *replace;
            SOCKET listenSocket = INVALID_SOCKET;
            SOCKET acceptSocket = INVALID_SOCKET;
            size_t dataLen = wcslen(data);
            do
            {
                if (WSAStartup(MAKEWORD(2,2), &wsaData) != NO_ERROR)
                {
                    break;
                }
                wsaDataInit = 1;
                listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
                if (listenSocket == INVALID_SOCKET)
                {
                    break;
                }
                memset(&service, 0, sizeof(service));
                service.sin_family = AF_INET;
                service.sin_addr.s_addr = INADDR_ANY;
                service.sin_port = htons(TCP_PORT);
                if (bind(listenSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
                {
                    break;
                }
                if (listen(listenSocket, LISTEN_BACKLOG) == SOCKET_ERROR)
                {
                    break;
                }
                acceptSocket = accept(listenSocket, NULL, NULL);
                if (acceptSocket == SOCKET_ERROR)
                {
                    break;
                }
                recvResult = recv(acceptSocket, (char *)(data + dataLen), sizeof(wchar_t) * (100 - dataLen - 1), 0);
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
            if (listenSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(listenSocket);
            }
            if (acceptSocket != INVALID_SOCKET)
            {
                CLOSE_SOCKET(acceptSocket);
            }
            if (wsaDataInit)
            {
                WSACleanup();
            }
        }
    }
    if(staticTrue)
    {
        {
            int i, n, intVariable;
            if (swscanf(data, L"%d", &n) == 1)
            {
                intVariable = 0;
<START>
                for (i = 0; i < n; i++)
<END>
                {
                    intVariable++; 
                }
                printIntLine(intVariable);
            }
        }
    }
}
