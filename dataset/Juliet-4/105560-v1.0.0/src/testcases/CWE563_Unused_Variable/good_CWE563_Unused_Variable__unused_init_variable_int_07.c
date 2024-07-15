static int staticFive = 5;
void FUN0()
{
    int data;
    data = 5;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printIntLine(data);
    }
}
