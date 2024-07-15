static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
