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
        if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
        {
            printLine("fread failed!");
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
        if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
        {
            printLine("fread failed!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
