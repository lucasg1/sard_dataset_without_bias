void FUN0()
{
    goto sink;
sink:
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
