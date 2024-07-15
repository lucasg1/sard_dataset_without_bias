void FUN0()
{
    if(5==5)
    {
        {
            HANDLE hMutex = NULL;
<START>
            hMutex = CreateMutexW(NULL, FALSE, NULL);
<END>
            CloseHandle(hMutex);
        }
    }
}
