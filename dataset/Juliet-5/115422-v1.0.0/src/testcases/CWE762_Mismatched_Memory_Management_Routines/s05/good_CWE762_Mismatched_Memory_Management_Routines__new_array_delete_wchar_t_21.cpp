namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(wchar_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(wchar_t * data)
{
    if(VAR2)
    {
        delete [] data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(wchar_t * data)
{
    if(VAR3)
    {
        delete data;
    }
}
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    VAR3 = 1; 
    FUN4(data);
}
} 
