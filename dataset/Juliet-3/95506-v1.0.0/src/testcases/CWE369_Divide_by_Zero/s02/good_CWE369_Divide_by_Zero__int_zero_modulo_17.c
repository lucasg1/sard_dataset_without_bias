void FUN0()
{
    int i,k;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        data = 0;
    }
    for(k = 0; k < 1; k++)
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
    int h,j;
    int data;
    data = -1;
    for(h = 0; h < 1; h++)
    {
        data = 7;
    }
    for(j = 0; j < 1; j++)
    {
        printIntLine(100 % data);
    }
}
