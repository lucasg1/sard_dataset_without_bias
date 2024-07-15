static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(STATIC_CONST_FALSE)
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
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(STATIC_CONST_TRUE)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(STATIC_CONST_TRUE)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(STATIC_CONST_TRUE)
    {
        fclose(data);
    }
}
