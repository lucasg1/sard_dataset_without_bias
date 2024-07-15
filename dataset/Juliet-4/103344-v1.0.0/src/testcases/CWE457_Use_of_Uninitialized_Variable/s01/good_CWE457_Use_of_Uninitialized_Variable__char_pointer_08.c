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
    char * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        data = "string";
        printLine(data);
    }
}
void FUN4()
{
    char * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(FUN0())
    {
        printLine(data);
    }
}
void FUN5()
{
    char * data;
    if(FUN0())
    {
        data = "string";
    }
    if(FUN0())
    {
        printLine(data);
    }
}
