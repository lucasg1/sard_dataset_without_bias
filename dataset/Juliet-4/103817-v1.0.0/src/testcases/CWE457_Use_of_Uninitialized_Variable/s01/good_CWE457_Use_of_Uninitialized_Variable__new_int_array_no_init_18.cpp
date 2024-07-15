namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = new int[10];
    goto source;
source:
    ; 
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
    delete [] data;
}
void FUN1()
{
    int * data;
    data = new int[10];
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
    delete [] data;
}
} 
