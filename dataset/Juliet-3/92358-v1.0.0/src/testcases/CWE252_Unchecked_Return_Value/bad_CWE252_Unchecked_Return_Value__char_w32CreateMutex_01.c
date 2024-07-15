void FUN0()
{
    {
        HANDLE hMutex = NULL;
<START>
        hMutex = CreateMutexA(NULL, FALSE, NULL);
<END>
        CloseHandle(hMutex);
    }
}
