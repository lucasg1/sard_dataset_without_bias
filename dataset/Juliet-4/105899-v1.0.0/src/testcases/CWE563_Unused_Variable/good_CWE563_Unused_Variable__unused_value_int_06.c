static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5;
    }
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
    if(STATIC_CONST_FIVE==5)
    {
        data = 5;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data);
    }
}
void FUN2()
{
    int data;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 5;
        printIntLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = 10;
        printIntLine(data);
    }
}
void FUN3()
{
    int data;
    if(STATIC_CONST_FIVE==5)
    {
        data = 5;
        printIntLine(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = 10;
        printIntLine(data);
    }
}
