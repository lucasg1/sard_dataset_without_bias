void FUN0()
{
    switch(6)
    {
    case 6:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
<START>
        if (SNPRINTF(data,100-wcslen(SRC_STRING)-1, L"%s\n", SRC_STRING) == 0)
<END>
        {
            printLine("snprintf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
