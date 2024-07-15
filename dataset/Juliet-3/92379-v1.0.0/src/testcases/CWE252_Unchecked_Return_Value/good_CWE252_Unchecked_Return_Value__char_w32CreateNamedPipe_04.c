static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * pipeName = "\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            BOOL fConnected = FALSE;
            hPipe = CreateNamedPipeA(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE, 
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
            CloseHandle(hPipe);
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            char * pipeName = "\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            BOOL fConnected = FALSE;
            hPipe = CreateNamedPipeA(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE, 
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
            CloseHandle(hPipe);
        }
    }
}
