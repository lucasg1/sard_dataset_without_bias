void FUN0()
{
    goto sink;
sink:
    {
        HANDLE hMutex = NULL;
<START>
        hMutex = CreateMutexW(NULL, FALSE, NULL);
<END>
        CloseHandle(hMutex);
    }
}
