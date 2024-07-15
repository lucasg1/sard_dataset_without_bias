void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    goto source;
source:
    wcscat(data, NEW_PATH);
    PUTENV(data);
}
