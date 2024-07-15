void FUN0()
{
    {
        HANDLE hMutex = NULL;
<START>
        hMutex = CreateMutexW(NULL, FALSE, NULL);
<END>
        CloseHandle(hMutex);
    }
}
