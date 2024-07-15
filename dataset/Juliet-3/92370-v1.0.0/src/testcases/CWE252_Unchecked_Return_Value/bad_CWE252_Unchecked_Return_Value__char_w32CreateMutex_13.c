void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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
