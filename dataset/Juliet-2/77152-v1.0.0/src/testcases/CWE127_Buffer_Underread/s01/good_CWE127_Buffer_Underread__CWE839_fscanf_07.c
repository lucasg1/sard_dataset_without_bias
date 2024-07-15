static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1;
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
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN1()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(staticFive==5)
    {
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
void FUN2()
{
    int data;
    data = -1;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(staticFive==5)
    {
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = 7;
    }
    if(staticFive==5)
    {
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
