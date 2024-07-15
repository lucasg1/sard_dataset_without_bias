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
<START>
            memmove(data, source, 10*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
} 
