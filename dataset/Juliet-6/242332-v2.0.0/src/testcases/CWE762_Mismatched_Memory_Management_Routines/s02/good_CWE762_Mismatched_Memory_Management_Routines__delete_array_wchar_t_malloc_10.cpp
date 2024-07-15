namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
} 
