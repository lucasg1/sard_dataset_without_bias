namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    delete [] data;
    goto sink;
sink:
<START>
    printIntLine(data[0]);
<END>
}
} 
