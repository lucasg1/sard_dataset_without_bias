void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = L"Good";
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    FUN6(data);
}
void FUN9(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN11(data);
}
void FUN1(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN3(data);
}
void FUN9(wchar_t * data)
{
    printWcharLine(data[0]);
}
void FUN11(wchar_t * data)
{
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
