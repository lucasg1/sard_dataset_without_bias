void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN1(data);
}
void FUN4(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    wcscat(data, NEW_PATH);
    FUN4(data);
}
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
void FUN0(wchar_t * data)
{
    PUTENV(data);
}
