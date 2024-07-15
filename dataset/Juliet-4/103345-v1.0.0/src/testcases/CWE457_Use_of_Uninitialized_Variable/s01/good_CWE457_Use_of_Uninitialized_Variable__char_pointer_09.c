void FUN0()
{
    char * data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(GLOBAL_CONST_TRUE)
    {
        data = "string";
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLine(data);
    }
}
