static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
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
}
