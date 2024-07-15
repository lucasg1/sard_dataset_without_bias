void FUN0()
{
    goto sink;
sink:
    {
        STARTUPINFOW si;
        PROCESS_INFORMATION pi;
        if( !CreateProcessW(NULL,
                            L"\"C:\\Program Files\\GoodApp\" arg1 arg2",
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
