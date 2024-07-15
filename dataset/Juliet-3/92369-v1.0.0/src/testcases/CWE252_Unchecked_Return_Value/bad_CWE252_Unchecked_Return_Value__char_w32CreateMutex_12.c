void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            HANDLE hMutex = NULL;
<START>
            hMutex = CreateMutexA(NULL, FALSE, NULL);
<END>
            CloseHandle(hMutex);
        }
    }
    else
    {
        {
            HANDLE hMutex = NULL;
            hMutex = CreateMutexA(NULL, FALSE, NULL);
            if (hMutex == NULL)
            {
                exit(1);
            }
            CloseHandle(hMutex);
        }
    }
}
