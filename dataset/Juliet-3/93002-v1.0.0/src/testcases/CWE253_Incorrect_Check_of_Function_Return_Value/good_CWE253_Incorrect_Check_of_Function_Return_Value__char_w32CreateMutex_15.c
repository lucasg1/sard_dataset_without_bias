void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        HANDLE hMutex = NULL;
        hMutex = CreateMutexA(NULL, FALSE, NULL);
        if (hMutex == NULL)
        {
            exit(1);
        }
        CloseHandle(hMutex);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        HANDLE hMutex = NULL;
        hMutex = CreateMutexA(NULL, FALSE, NULL);
        if (hMutex == NULL)
        {
            exit(1);
        }
        CloseHandle(hMutex);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
