static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
