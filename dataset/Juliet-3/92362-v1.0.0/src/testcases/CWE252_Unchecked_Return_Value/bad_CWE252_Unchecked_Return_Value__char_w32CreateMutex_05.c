static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
