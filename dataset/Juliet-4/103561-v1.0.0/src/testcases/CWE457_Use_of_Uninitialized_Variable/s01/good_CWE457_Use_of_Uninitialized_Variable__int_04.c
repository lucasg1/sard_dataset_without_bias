static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int data;
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
        data = 5;
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
    {
        data = 5;
        printIntLine(data);
    }
}
void FUN2()
{
    int data;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    if(STATIC_CONST_TRUE)
    {
        data = 5;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data);
    }
}
