void FUN0()
{
    char * data;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(globalTrue)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(globalTrue)
    {
        data = "string";
    }
    if(globalTrue)
    {
        printLine(data);
    }
}
