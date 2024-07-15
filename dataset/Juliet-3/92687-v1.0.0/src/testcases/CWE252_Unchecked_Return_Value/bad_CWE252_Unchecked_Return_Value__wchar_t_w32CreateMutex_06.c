static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
