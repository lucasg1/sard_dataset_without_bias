static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(staticTrue)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(staticTrue)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(staticTrue)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(staticTrue)
    {
        fclose(data);
    }
}
