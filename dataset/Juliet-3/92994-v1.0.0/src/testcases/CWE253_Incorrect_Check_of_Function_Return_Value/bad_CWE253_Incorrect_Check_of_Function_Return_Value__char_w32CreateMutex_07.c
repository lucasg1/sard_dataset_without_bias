static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
