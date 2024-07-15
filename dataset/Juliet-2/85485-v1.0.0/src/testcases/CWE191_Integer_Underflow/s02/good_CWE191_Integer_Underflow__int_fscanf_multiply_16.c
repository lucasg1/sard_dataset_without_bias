void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        fscanf(stdin, "%d", &data);
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
            if (data > (INT_MIN/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
        break;
    }
}
void FUN1()
{
    int data;
    data = 0;
    while(1)
    {
        data = -2;
        break;
    }
    while(1)
    {
        if(data < 0) 
        {
            int result = data * 2;
            printIntLine(result);
        }
        break;
    }
}
