static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printLine("Not in path");
    }
}
