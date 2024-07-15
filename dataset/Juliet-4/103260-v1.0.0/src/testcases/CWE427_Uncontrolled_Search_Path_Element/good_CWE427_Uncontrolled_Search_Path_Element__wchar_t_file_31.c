void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    wcscat(data, NEW_PATH);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        PUTENV(data);
    }
}
