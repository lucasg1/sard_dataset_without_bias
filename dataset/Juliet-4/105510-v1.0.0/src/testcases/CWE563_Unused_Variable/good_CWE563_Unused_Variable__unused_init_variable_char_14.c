void FUN0()
{
    char data;
    data = 'C';
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printHexCharLine(data);
    }
}
void FUN1()
{
    char data;
    data = 'C';
    if(globalFive==5)
    {
        printHexCharLine(data);
    }
}
