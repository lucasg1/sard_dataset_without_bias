void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    wcscat(data, NEW_PATH);
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
void FUN5(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN5(data);
}
void FUN6(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN6(data);
}
void FUN5(wchar_t * data)
{
    PUTENV(data);
}
