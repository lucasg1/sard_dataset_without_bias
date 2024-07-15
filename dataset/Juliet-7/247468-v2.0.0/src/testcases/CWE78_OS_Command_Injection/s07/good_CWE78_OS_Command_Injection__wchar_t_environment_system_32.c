void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    {
        wchar_t * data = *dataPtr1;
        wcscat(data, L"*.*");
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        if (SYSTEM(data) != 0)
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}
