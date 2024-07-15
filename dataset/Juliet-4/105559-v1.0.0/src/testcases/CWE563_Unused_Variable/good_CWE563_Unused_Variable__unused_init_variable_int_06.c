static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = 5;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printIntLine(data);
    }
}
void FUN1()
{
    int data;
    data = 5;
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data);
    }
}
