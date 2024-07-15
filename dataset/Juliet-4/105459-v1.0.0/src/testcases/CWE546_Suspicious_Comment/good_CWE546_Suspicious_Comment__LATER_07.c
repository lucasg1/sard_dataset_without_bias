static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printLine("Hello");
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        printLine("Hello");
    }
}
