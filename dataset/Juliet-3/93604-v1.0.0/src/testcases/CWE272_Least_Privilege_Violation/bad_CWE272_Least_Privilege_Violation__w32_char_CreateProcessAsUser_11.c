void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            STARTUPINFOA si;
            PROCESS_INFORMATION pi;
            HANDLE pHandle = NULL;
<START>
            if(!CreateProcessAsUserA(pHandle,
<END>
                                     NULL,
                                     "C:\\Program Files\\GoodApp arg1 arg2",
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
