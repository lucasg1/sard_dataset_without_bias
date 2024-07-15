void FUN0()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(GLOBAL_CONST_TRUE)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(GLOBAL_CONST_TRUE)
    {
        fclose(data);
    }
}
