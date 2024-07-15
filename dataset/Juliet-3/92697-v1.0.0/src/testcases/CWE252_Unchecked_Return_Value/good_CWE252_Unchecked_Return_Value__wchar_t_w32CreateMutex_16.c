void FUN0()
{
    while(1)
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
        break;
    }
}
