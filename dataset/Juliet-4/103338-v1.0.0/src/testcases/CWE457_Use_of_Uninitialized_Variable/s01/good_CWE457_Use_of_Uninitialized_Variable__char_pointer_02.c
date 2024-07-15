void FUN0()
{
    char * data;
    if(1)
    {
        ; 
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    if(1)
    {
        ; 
    }
    if(1)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(1)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(1)
    {
        data = "string";
    }
    if(1)
    {
        printLine(data);
    }
}
