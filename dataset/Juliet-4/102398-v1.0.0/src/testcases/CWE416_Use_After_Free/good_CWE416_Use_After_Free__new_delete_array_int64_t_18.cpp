namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    delete [] data;
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    goto sink;
sink:
    printLongLongLine(data[0]);
}
} 
