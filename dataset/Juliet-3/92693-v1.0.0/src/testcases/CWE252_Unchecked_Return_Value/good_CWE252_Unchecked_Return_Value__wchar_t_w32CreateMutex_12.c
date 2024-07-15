void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            HANDLE hMutex = NULL;
            hMutex = CreateMutexW(NULL, FALSE, NULL);
            if (hMutex == NULL)
            {
                exit(1);
            }
            CloseHandle(hMutex);
        }
    }
    else
    {
        {
            HANDLE hMutex = NULL;
            hMutex = CreateMutexW(NULL, FALSE, NULL);
            if (hMutex == NULL)
            {
                exit(1);
            }
            CloseHandle(hMutex);
        }
    }
}
