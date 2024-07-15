wchar_t * VAR0;
wchar_t * VAR1;
wchar_t * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    wchar_t * data;
    data = L"Good";
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    VAR2 = data;
    FUN1();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
extern wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR1;
    printWcharLine(data[0]);
}
void FUN1()
{
    wchar_t * data = VAR2;
    if (data != NULL)
    {
        printWcharLine(data[0]);
    }
    else
    {
        printLine("data is NULL");
    }
}
