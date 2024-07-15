namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printIntLine(data[0]);
<END>
    }
}
} 
