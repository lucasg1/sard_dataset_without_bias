void FUN0()
{
    goto sink;
sink:
    {
        wchar_t * pipeName = L"\\\\.\\pipe\\mypipe";
        HANDLE hPipe = INVALID_HANDLE_VALUE;
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
        if (hPipe == INVALID_HANDLE_VALUE)
        {
            exit(1);
        }
        if (!ImpersonateNamedPipeClient(hPipe))
        {
            exit(1);
        }
        CloseHandle(hPipe);
    }
}
