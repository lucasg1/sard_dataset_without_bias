static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(FUN0())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(FUN0())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(FUN0())
    {
        ; 
    }
}
void FUN4()
{
    FILE * data;
    data = NULL; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(FUN0())
    {
        fclose(data);
    }
}
void FUN5()
{
    FILE * data;
    data = NULL; 
    if(FUN0())
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(FUN0())
    {
        fclose(data);
    }
}
