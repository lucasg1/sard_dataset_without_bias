void FUN0()
{
    goto sink;
sink:
    {
        HANDLE hMutex = NULL;
        hMutex = CreateMutexA(NULL, FALSE, NULL);
<START>
        if (hMutex == INVALID_HANDLE_VALUE)
<END>
        {
            exit(1);
        }
        CloseHandle(hMutex);
    }
}
