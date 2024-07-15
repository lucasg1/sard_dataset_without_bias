namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = (int *)ALLOCA(10);
    {
        int * data = dataRef;
        {
            int source[10] = {0};
            size_t i;
            for (i = 0; i < 10; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
        }
    }
}
} 
