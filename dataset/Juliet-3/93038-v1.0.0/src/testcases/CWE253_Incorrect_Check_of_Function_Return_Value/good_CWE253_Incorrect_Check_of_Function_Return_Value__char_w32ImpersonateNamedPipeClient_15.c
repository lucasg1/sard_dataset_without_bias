void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * pipeName = "\\\\.\\pipe\\mypipe";
        HANDLE hPipe = INVALID_HANDLE_VALUE;
        hPipe = CreateNamedPipeA(
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char * pipeName = "\\\\.\\pipe\\mypipe";
        HANDLE hPipe = INVALID_HANDLE_VALUE;
        hPipe = CreateNamedPipeA(
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
