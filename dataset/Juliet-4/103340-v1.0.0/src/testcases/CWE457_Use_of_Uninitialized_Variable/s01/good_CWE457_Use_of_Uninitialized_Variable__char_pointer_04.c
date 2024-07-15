static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    char * data;
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
    {
        data = "string";
        printLine(data);
    }
}
void FUN2()
{
    char * data;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = "string";
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}
void FUN3()
{
    char * data;
    if(STATIC_CONST_TRUE)
    {
        data = "string";
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}
