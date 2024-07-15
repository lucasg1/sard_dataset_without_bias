static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN3()
{
    if(FUN0())
    {
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
    }
}
