void FUN0()
{
    if(globalTrue)
    {
        {
            HANDLE hMutex = NULL;
<START>
            hMutex = CreateMutexA(NULL, FALSE, NULL);
<END>
            CloseHandle(hMutex);
        }
    }
}
