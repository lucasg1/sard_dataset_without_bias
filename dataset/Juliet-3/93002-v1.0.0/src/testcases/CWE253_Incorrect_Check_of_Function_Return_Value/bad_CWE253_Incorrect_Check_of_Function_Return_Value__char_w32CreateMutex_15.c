void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
