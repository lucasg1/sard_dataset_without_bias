void FUN0()
{
    while(1)
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
<START>
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
<END>
            CloseHandle(hPipe);
        }
        break;
    }
}
