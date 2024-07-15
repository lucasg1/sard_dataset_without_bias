void FUN0()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = RAND32();
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
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
    if(GLOBAL_CONST_FIVE==5)
    {
        data = RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 7;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            int buffer[10] = { 0 };
            if (data < 10)
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
        }
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = 7;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int i;
            int buffer[10] = { 0 };
            if (data < 10)
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
        }
    }
}
