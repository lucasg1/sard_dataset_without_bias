void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        wcscat(data, NEW_PATH);
    }
    PUTENV(data);
}
