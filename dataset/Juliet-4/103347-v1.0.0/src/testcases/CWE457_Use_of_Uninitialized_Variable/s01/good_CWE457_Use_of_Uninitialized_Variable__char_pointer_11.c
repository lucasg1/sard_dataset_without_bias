void FUN0()
{
    char * data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(globalReturnsTrue())
    {
        data = "string";
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}
