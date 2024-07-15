void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        if (swscanf(SRC_STRING, L"%99s\0", data) == EOF)
        {
            printLine("swscanf failed!");
        }
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
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        if (swscanf(SRC_STRING, L"%99s\0", data) == EOF)
        {
            printLine("swscanf failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
