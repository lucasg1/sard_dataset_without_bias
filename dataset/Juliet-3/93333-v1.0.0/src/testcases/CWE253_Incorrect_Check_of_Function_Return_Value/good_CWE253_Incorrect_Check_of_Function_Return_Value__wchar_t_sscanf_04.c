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
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (swscanf(SRC_STRING, L"%99s\0", data) == EOF)
            {
                printLine("swscanf failed!");
            }
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            wchar_t dataBuffer[100] = L"";
            wchar_t * data = dataBuffer;
            if (swscanf(SRC_STRING, L"%99s\0", data) == EOF)
            {
                printLine("swscanf failed!");
            }
        }
    }
}
