namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
    }
    if(globalFive==5)
    {
        delete data;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
        free(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(globalFive==5)
    {
        free(data);
    }
}
} 
