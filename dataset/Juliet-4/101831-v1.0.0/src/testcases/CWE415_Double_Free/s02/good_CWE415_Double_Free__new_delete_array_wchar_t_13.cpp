namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t[100];
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t[100];
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t[100];
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete [] data;
    }
}
} 
