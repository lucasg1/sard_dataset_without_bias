void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    else
    {
        data = freopen("BadSource_freopen.txt","w+",stdin);
        fclose(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        ; 
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
    if(globalReturnsTrueOrFalse())
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalReturnsTrueOrFalse())
    {
        fclose(data);
    }
    else
    {
        fclose(data);
    }
}
