void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        wcscat(data, NEW_PATH);
    }
    else
    {
        wcscat(data, NEW_PATH);
    }
    PUTENV(data);
}
