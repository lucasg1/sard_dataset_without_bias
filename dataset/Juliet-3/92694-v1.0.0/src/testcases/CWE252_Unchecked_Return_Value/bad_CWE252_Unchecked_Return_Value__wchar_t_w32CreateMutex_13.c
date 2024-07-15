void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            HANDLE hMutex = NULL;
<START>
            hMutex = CreateMutexW(NULL, FALSE, NULL);
<END>
            CloseHandle(hMutex);
        }
    }
}
