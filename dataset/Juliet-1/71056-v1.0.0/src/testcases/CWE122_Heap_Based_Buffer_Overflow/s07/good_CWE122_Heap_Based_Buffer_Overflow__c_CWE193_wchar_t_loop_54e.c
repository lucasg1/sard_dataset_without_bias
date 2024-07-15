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
void FUN3(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN3(data);
}
void FUN5(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    FUN5(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
        free(data);
    }
}
