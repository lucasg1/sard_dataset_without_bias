void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            HANDLE hPipe;
            char * pipeName = PIPE_NAME;
<START>
            hPipe = CreateNamedPipeA(
<END>
                        pipeName,
                        PIPE_ACCESS_DUPLEX,
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
    }
}
