static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(FUN0())
    {
        ; 
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}
void FUN4()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}
void FUN5()
{
    twoIntsStruct * data;
    data = (twoIntsStruct *)ALLOCA(10*sizeof(twoIntsStruct));
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i].intOne = i;
                data[i].intTwo = i;
            }
        }
    }
    if(FUN0())
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i].intOne);
                printIntLine(data[i].intTwo);
            }
        }
    }
}
