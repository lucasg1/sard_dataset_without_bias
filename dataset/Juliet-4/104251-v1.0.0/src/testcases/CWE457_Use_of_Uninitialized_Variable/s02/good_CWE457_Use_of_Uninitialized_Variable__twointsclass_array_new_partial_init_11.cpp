namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    if(globalReturnsTrue())
    {
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    if(globalReturnsTrue())
    {
        for(int i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(globalReturnsTrue())
    {
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(globalReturnsTrue())
    {
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = new TwoIntsClass[10];
    if(globalReturnsTrue())
    {
        for(int i=0; i<10; i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
    if(globalReturnsTrue())
    {
        for(int i=0; i<10; i++)
        {
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
        }
    }
}
} 
