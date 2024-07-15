static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
