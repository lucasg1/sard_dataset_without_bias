void FUN0()
{
    switch(6)
    {
    case 6:
    {
        HANDLE hMutex = NULL;
<START>
        hMutex = CreateMutexA(NULL, FALSE, NULL);
<END>
        CloseHandle(hMutex);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
