void FUN0()
{
    char * data;
    if(5==5)
    {
        ; 
    }
    if(5!=5)
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
    if(5==5)
    {
        ; 
    }
    if(5==5)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(5==5)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(5==5)
    {
        data = "string";
    }
    if(5==5)
    {
        printLine(data);
    }
}
