namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int[50];
    {
        int * dataCopy = data;
        int * data = dataCopy;
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
} 
