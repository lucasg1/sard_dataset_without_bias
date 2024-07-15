void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    while(1)
    {
        wcscat(data, NEW_PATH);
        break;
    }
    PUTENV(data);
}
