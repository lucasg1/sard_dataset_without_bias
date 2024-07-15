void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    else
    {
        data = fopen("BadSource_fopen.txt", "w+");
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
