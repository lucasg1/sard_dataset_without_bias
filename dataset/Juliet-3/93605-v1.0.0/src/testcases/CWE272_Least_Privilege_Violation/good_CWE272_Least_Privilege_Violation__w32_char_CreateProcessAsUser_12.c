void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
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
    }
    else
    {
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
    }
}
