static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    long data;
    ; 
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5L;
        printLongLine(data);
    }
}
void FUN1()
{
    long data;
    ; 
    if(STATIC_CONST_TRUE)
    {
        data = 5L;
        printLongLine(data);
    }
}
