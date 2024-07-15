void FUN0()
{
    FILE * data;
    data = NULL; 
    if(5==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(5!=5)
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
    if(5==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(5==5)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(5==5)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(5==5)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(5==5)
    {
        fclose(data);
    }
}
