void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = 7;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        printIntLine(100 / data);
    }
}
void FUN1()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = 0;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        if( data != 0 )
        {
            printIntLine(100 / data);
        }
        else
        {
            printLine("This would result in a divide by zero");
        }
    }
}
