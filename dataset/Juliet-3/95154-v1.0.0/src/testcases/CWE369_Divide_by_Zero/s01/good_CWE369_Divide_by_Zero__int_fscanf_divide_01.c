void FUN0()
{
    int data;
    data = -1;
    data = 7;
    printIntLine(100 / data);
}
void FUN1()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    if( data != 0 )
    {
        printIntLine(100 / data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
