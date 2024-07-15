static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    long data;
    ; 
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = 5L;
        printLongLine(data);
    }
}
