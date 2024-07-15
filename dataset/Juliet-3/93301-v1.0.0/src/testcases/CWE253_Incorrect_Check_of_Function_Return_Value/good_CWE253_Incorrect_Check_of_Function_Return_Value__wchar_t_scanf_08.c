static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (wscanf(L"%99s\0", data) == EOF)
            {
                printLine("wscanf failed!");
            }
        }
    }
}
void FUN3()
{
    if(FUN0())
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (wscanf(L"%99s\0", data) == EOF)
            {
                printLine("wscanf failed!");
            }
        }
    }
}
