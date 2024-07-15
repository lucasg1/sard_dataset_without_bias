void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        HANDLE hPipe;
        char * pipeName = PIPE_NAME;
        hPipe = CreateNamedPipeA(
                    pipeName,
                    FILE_FLAG_FIRST_PIPE_INSTANCE | PIPE_ACCESS_DUPLEX,
                    PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                    PIPE_UNLIMITED_INSTANCES,
                    BUFSIZE,
                    BUFSIZE,
                    0,
                    NULL);
        if (hPipe == INVALID_HANDLE_VALUE)
        {
            printLine("Windows pipe creation failed");
        }
        else
        {
            printLine("Windows pipe created successfully");
            CloseHandle(hPipe);
        }
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
        HANDLE hPipe;
        char * pipeName = PIPE_NAME;
        hPipe = CreateNamedPipeA(
                    pipeName,
                    FILE_FLAG_FIRST_PIPE_INSTANCE | PIPE_ACCESS_DUPLEX,
                    PIPE_TYPE_MESSAGE | PIPE_READMODE_MESSAGE | PIPE_WAIT,
                    PIPE_UNLIMITED_INSTANCES,
                    BUFSIZE,
                    BUFSIZE,
                    0,
                    NULL);
        if (hPipe == INVALID_HANDLE_VALUE)
        {
            printLine("Windows pipe creation failed");
        }
        else
        {
            printLine("Windows pipe created successfully");
            CloseHandle(hPipe);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
