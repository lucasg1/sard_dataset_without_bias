static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            STARTUPINFOW si;
            PROCESS_INFORMATION pi;
            HANDLE pHandle = NULL;
            if(!CreateProcessAsUserW(pHandle,
                                     NULL,
                                     L"\"C:\\Program Files\\GoodApp\" arg1 arg2",
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
    }
}
void FUN1()
{
    if(staticTrue)
    {
        {
            STARTUPINFOW si;
            PROCESS_INFORMATION pi;
            HANDLE pHandle = NULL;
            if(!CreateProcessAsUserW(pHandle,
                                     NULL,
                                     L"\"C:\\Program Files\\GoodApp\" arg1 arg2",
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
    }
}
