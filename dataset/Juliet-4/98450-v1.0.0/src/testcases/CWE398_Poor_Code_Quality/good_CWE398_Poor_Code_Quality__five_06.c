static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Hello from good()");
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        printLine("Hello from good()");
    }
}
