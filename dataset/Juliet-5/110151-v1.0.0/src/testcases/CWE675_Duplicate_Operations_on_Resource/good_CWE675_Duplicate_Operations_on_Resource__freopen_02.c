void FUN0()
{
    FILE * data;
    data = NULL; 
    if(1)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(0)
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
    if(1)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(1)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(1)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(1)
    {
        fclose(data);
    }
}
