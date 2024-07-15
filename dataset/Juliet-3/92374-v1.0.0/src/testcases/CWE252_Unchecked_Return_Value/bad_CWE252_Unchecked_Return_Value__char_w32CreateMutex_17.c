void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
