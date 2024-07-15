static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFive==5)
    {
        ; 
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
