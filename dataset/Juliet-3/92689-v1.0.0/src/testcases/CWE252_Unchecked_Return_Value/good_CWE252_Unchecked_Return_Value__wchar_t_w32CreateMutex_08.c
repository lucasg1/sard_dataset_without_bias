static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
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
void FUN3()
{
    if(FUN0())
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
