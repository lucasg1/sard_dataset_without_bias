void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            STARTUPINFOA si;
            PROCESS_INFORMATION pi;
            if( !CreateProcessA(NULL,
                                "\"C:\\Program Files\\GoodApp\" arg1 arg2",
                                NULL,
                                NULL,
                                FALSE,
                                0,
                                NULL,
                                NULL,
                                &si,
                                &pi))
            {
                printf( "CreateProcess failed (%d).\n", GetLastError() );
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
void FUN1()
{
    if(globalTrue)
    {
        {
            STARTUPINFOA si;
            PROCESS_INFORMATION pi;
            if( !CreateProcessA(NULL,
                                "\"C:\\Program Files\\GoodApp\" arg1 arg2",
                                NULL,
                                NULL,
                                FALSE,
                                0,
                                NULL,
                                NULL,
                                &si,
                                &pi))
            {
                printf( "CreateProcess failed (%d).\n", GetLastError() );
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
