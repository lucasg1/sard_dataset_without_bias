void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HANDLE hMutex = NULL;
            hMutex = CreateMutexA(NULL, FALSE, NULL);
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
