void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    wcscat(data, L"*.*");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
}
