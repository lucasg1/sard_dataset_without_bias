namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = new wchar_t[100];
    }
    if(0)
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
    if(1)
    {
        data = new wchar_t[100];
    }
    if(1)
    {
        delete [] data;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
    }
    if(1)
    {
        delete data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = new wchar_t;
    }
    if(1)
    {
        delete data;
    }
}
} 
