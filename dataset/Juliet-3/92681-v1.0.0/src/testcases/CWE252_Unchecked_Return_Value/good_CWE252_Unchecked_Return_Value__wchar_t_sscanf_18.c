void FUN0()
{
    goto sink;
sink:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        if (swscanf(SRC, L"%99s\0", data) == EOF)
        {
            printLine("swscanf failed!");
        }
    }
}
