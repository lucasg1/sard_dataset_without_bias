static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wcscat(data, NEW_PATH);
    }
    PUTENV(data);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    if(staticFive==5)
    {
        wcscat(data, NEW_PATH);
    }
    PUTENV(data);
}
