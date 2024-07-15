void FUN0()
{
    goto sink;
sink:
    {
        WSADATA wsaData;
        int wsaDataInit = 0;
        struct sockaddr_in service;
        SOCKET connectSocket = INVALID_SOCKET;
        char contents[65536]; 
        FILE * pFile;
        pFile = fopen(FILENAME, "r");
        if (pFile != NULL)
        {
            if (fgets(contents, (int)(65535), pFile) == NULL)
            {
                printLine("fgets() failed");
                contents[0] = '\0';
            }
            fclose(pFile);
        }
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
            service.sin_addr.s_addr = INADDR_ANY;
            service.sin_port = htons(TCP_PORT);
            if (connect(connectSocket, (struct sockaddr*)&service, sizeof(service)) == SOCKET_ERROR)
            {
                break;
            }
<START>
            if (send(connectSocket, contents, strlen(contents), 0) != strlen(contents))
<END>
            {
                break;
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
}
