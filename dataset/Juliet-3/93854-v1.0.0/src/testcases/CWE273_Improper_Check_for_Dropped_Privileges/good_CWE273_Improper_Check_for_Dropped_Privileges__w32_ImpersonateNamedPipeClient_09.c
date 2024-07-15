void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            hPipe = CreateNamedPipeA(
                        "\\\\.\\pipe\\test_pipe",
                        PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                        PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            if (!ConnectNamedPipe(hPipe, NULL) && GetLastError() != ERROR_PIPE_CONNECTED)
            {
                CloseHandle(hPipe);
                exit(1);
            }
            if (!ImpersonateNamedPipeClient(hPipe))
            {
                printLine("Failed to impersonate");
            }
            else
            {
                printLine("Impersonated");
                if (!RevertToSelf())
                {
                    exit(1);
                }
            }
            CloseHandle(hPipe);
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            HANDLE hPipe = INVALID_HANDLE_VALUE;
            hPipe = CreateNamedPipeA(
                        "\\\\.\\pipe\\test_pipe",
                        PIPE_ACCESS_DUPLEX | FILE_FLAG_FIRST_PIPE_INSTANCE,
                        PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                        PIPE_UNLIMITED_INSTANCES,
                        BUFSIZE,
                        BUFSIZE,
                        NMPWAIT_USE_DEFAULT_WAIT,
                        NULL);
            if (hPipe == INVALID_HANDLE_VALUE)
            {
                exit(1);
            }
            if (!ConnectNamedPipe(hPipe, NULL) && GetLastError() != ERROR_PIPE_CONNECTED)
            {
                CloseHandle(hPipe);
                exit(1);
            }
            if (!ImpersonateNamedPipeClient(hPipe))
            {
                printLine("Failed to impersonate");
            }
            else
            {
                printLine("Impersonated");
                if (!RevertToSelf())
                {
                    exit(1);
                }
            }
            CloseHandle(hPipe);
        }
    }
}
