void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            STARTUPINFOW si;
            PROCESS_INFORMATION pi;
<START>
            if( !CreateProcessW(NULL,
<END>
                                L"C:\\Program Files\\GoodApp arg1 arg2",
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
