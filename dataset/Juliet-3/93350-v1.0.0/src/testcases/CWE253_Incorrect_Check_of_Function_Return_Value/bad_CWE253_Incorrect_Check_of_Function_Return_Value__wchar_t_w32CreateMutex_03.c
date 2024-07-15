void FUN0()
{
    if(5==5)
    {
        {
            HANDLE hMutex = NULL;
            hMutex = CreateMutexW(NULL, FALSE, NULL);
<START>
            if (hMutex == INVALID_HANDLE_VALUE)
<END>
            {
                exit(1);
            }
            CloseHandle(hMutex);
        }
    }
}
