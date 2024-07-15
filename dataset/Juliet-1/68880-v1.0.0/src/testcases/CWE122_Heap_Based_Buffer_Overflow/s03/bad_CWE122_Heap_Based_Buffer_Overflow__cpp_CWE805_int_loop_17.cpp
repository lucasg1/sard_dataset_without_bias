namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new int[50];
    }
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
