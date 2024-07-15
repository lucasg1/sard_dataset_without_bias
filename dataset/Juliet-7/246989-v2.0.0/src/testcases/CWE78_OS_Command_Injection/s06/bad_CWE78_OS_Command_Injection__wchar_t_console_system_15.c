void FUN0()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    switch(6)
    {
    case 6:
    {
        size_t dataLen = wcslen(data);
        if (100-dataLen > 1)
        {
            if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = wcslen(data);
                if (dataLen > 0 && data[dataLen-1] == L'\n')
                {
                    data[dataLen-1] = L'\0';
                }
            }
            else
            {
                printLine("fgetws() failed");
                data[dataLen] = L'\0';
            }
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}
