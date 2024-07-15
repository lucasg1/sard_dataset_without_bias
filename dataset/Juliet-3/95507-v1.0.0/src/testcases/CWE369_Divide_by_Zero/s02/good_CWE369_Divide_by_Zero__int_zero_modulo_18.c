void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = 0;
    goto sink;
sink:
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
void FUN1()
{
    int data;
    data = -1;
    goto source;
source:
    data = 7;
    goto sink;
sink:
    printIntLine(100 % data);
}
