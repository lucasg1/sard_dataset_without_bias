wchar_t * FUN0(wchar_t * data)
{
    wcscat(data, NEW_PATH);
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    data = FUN0(data);
    PUTENV(data);
}
