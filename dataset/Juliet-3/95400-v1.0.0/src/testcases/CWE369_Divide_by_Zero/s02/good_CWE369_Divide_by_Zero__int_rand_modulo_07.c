static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = RAND32();
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = RAND32();
    }
    if(staticFive==5)
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
void FUN2()
{
    int data;
    data = -1;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(staticFive==5)
    {
        printIntLine(100 % data);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = 7;
    }
    if(staticFive==5)
    {
        printIntLine(100 % data);
    }
}
