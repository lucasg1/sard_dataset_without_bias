namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    {
        int * data = dataRef;
        {
            int source[10] = {0};
            size_t i;
            for (i = 0; i < 10; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
} 
