void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            STARTUPINFOW si;
            PROCESS_INFORMATION pi;
            HANDLE pHandle = NULL;
<START>
            if(!CreateProcessAsUserW(pHandle,
<END>
                                     NULL,
                                     L"C:\\Program Files\\GoodApp arg1 arg2",
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
