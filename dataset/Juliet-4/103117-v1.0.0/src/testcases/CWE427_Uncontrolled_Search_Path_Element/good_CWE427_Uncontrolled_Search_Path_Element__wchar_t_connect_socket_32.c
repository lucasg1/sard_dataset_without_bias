void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wcscat(data, NEW_PATH);
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        PUTENV(data);
    }
}
