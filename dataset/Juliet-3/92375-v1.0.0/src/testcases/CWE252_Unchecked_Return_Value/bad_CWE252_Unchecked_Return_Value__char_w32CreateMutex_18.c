void FUN0()
{
    goto sink;
sink:
    {
        HANDLE hMutex = NULL;
<START>
        hMutex = CreateMutexA(NULL, FALSE, NULL);
<END>
        CloseHandle(hMutex);
    }
}
