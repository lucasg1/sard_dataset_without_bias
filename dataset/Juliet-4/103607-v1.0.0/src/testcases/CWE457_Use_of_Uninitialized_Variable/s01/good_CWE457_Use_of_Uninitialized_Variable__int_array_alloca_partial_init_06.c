static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}
void FUN1()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}
void FUN2()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}
void FUN3()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}
