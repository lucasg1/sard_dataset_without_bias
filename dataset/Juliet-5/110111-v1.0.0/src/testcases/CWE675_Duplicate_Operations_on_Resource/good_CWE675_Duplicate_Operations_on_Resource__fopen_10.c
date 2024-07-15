void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalTrue)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(globalTrue)
    {
        ; 
    }
}
void FUN2()
{
    FILE * data;
    data = NULL; 
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalTrue)
    {
        fclose(data);
    }
}
void FUN3()
{
    FILE * data;
    data = NULL; 
    if(globalTrue)
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalTrue)
    {
        fclose(data);
    }
}
