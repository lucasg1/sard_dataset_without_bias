void FUN0()
{
    int data;
    data = 5;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        printIntLine(data);
    }
}
