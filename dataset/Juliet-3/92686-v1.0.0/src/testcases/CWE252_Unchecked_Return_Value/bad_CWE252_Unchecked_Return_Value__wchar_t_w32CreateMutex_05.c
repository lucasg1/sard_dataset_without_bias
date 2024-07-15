static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
