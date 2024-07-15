void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        fscanf(stdin, "%d", &data);
        break;
    }
    while(1)
    {
        if( data != 0 )
        {
            printIntLine(100 % data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
        break;
    }
}
void FUN1()
{
    int data;
    data = -1;
    while(1)
    {
        data = 7;
        break;
    }
    while(1)
    {
        printIntLine(100 % data);
        break;
    }
}
