void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, L"*.*");
    }
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    if(GLOBAL_CONST_FIVE==5)
    {
        wcscat(data, L"*.*");
    }
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
