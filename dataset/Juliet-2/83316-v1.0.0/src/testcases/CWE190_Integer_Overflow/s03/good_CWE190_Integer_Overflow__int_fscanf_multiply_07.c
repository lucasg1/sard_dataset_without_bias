static int staticFive = 5;
void FUN0()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if(data > 0) 
        {
            if (data < (INT_MAX/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticFive==5)
    {
        if(data > 0) 
        {
            if (data < (INT_MAX/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too large to perform arithmetic safely.");
            }
        }
    }
}
void FUN2()
{
    int data;
    data = 0;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 2;
    }
    if(staticFive==5)
    {
        if(data > 0) 
        {
            int result = data * 2;
            printIntLine(result);
        }
    }
}
void FUN3()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        data = 2;
    }
    if(staticFive==5)
    {
        if(data > 0) 
        {
            int result = data * 2;
            printIntLine(result);
        }
    }
}
