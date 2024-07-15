void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrue())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalReturnsTrue())
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrue())
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalReturnsTrue())
    {
        fclose(data);
    }
}
