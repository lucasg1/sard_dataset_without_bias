void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        STARTUPINFOA si;
        PROCESS_INFORMATION pi;
        HANDLE pHandle = NULL;
        if(!CreateProcessAsUserA(pHandle,
                                 NULL,
                                 "\"C:\\Program Files\\GoodApp\" arg1 arg2",
                                 NULL,
                                 NULL,
                                 FALSE,
                                 DETACHED_PROCESS,
                                 NULL,
                                 NULL,
                                 &si,
                                 &pi))
        {
            printLine("CreateProcessAsUser failed");
            RevertToSelf();
            CloseHandle(pHandle);
            return;
        }
        else
        {
            printLine("CreateProcessAUser successful");
        }
        WaitForSingleObject(pi.hProcess, INFINITE);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        CloseHandle(pHandle);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        STARTUPINFOA si;
        PROCESS_INFORMATION pi;
        HANDLE pHandle = NULL;
        if(!CreateProcessAsUserA(pHandle,
                                 NULL,
                                 "\"C:\\Program Files\\GoodApp\" arg1 arg2",
                                 NULL,
                                 NULL,
                                 FALSE,
                                 DETACHED_PROCESS,
                                 NULL,
                                 NULL,
                                 &si,
                                 &pi))
        {
            printLine("CreateProcessAsUser failed");
            RevertToSelf();
            CloseHandle(pHandle);
            return;
        }
        else
        {
            printLine("CreateProcessAUser successful");
        }
        WaitForSingleObject(pi.hProcess, INFINITE);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
        CloseHandle(pHandle);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
