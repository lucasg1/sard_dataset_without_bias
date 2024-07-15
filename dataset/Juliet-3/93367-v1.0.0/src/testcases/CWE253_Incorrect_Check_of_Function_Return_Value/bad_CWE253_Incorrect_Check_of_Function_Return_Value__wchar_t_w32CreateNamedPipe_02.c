void FUN0()
{
    if(1)
    {
        {
            wchar_t * pipeName = L"\\\\.\\pipe\\mypipe";
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            BOOL fConnected = FALSE;
            hPipe = CreateNamedPipeW(
                        pipeName,
                        FILE_FLAG_FIRST_PIPE_INSTANCE, 
                        PIPE_TYPE_MESSAGE |
                        PIPE_READMODE_MESSAGE |
                        PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFFER_SIZE,
                        BUFFER_SIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
<START>
            if (hPipe == NULL)
<END>
            {
                exit(1);
            }
            fConnected = ConnectNamedPipe(hPipe, NULL) ? TRUE : (GetLastError() == ERROR_PIPE_CONNECTED);
            CloseHandle(hPipe);
        }
    }
}
