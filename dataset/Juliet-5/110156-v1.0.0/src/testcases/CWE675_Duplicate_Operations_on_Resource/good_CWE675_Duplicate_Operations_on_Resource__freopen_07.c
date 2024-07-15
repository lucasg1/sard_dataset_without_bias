static int staticFive = 5;
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(staticFive==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
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
    FILE * data;
    data = NULL; 
    if(staticFive==5)
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(staticFive==5)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(staticFive==5)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(staticFive==5)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(staticFive==5)
    {
        fclose(data);
    }
}
