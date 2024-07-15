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
            STARTUPINFOA si;
            PROCESS_INFORMATION pi;
<START>
            if( !CreateProcessA(NULL,
<END>
                                "C:\\Program Files\\GoodApp arg1 arg2",
                                NULL,
                                NULL,
                                FALSE,
                                0,
                                NULL,
                                NULL,
                                &si,
                                &pi))
            {
                printLine("CreateProcess failed");
                return;
            }
            else
            {
                printLine("CreateProcess successful");
            }
            WaitForSingleObject(pi.hProcess, INFINITE);
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
        }
    }
}
