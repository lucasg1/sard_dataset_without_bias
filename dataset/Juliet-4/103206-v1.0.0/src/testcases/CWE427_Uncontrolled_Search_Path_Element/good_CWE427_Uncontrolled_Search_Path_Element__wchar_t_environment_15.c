void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        wcscat(data, NEW_PATH);
        break;
    }
    PUTENV(data);
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    switch(6)
    {
    case 6:
        wcscat(data, NEW_PATH);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    PUTENV(data);
}
