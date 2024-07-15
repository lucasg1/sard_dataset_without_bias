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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
