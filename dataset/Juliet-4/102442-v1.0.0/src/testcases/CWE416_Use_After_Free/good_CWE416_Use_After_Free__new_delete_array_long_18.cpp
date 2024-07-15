namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    delete [] data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    goto sink;
sink:
    printLongLine(data[0]);
}
} 
