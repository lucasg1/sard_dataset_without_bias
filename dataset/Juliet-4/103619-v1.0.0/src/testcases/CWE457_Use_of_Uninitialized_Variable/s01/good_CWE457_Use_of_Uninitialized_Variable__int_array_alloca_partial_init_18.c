void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    goto source;
source:
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = i;
        }
    }
    goto sink;
sink:
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
void FUN1()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    goto source;
source:
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    goto sink;
sink:
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
