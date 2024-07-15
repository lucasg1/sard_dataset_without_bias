static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(wchar_t * data)
{
    if(VAR1)
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
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(wchar_t * data)
{
    if(VAR2)
    {
        printWcharLine(data[0]);
    }
}
void FUN5()
{
    wchar_t * data;
    data = L"Good";
    VAR2 = 1; 
    FUN4(data);
}
