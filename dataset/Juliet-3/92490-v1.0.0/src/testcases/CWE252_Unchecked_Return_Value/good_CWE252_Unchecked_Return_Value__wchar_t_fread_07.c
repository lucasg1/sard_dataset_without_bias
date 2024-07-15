static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (fread((wchar_t *)data, sizeof(wchar_t), (size_t)(100-1), stdin) != 100-1)
            {
                printLine("fread failed!");
            }
        }
    }
}
