void FUN0()
{
    int i,k;
    int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = INT_MIN;
    }
    for(k = 0; k < 1; k++)
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
    }
}
void FUN1()
{
    int h,j;
    int data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = -2;
    }
    for(j = 0; j < 1; j++)
    {
        if(data < 0) 
        {
            int result = data * 2;
            printIntLine(result);
        }
    }
}
