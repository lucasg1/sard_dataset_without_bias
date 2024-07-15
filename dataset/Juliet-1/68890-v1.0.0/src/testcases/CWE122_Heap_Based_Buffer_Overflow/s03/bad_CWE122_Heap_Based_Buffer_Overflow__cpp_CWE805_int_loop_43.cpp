namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[50];
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
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
