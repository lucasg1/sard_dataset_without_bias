static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Not in path");
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        printLine("Not in path");
    }
}
