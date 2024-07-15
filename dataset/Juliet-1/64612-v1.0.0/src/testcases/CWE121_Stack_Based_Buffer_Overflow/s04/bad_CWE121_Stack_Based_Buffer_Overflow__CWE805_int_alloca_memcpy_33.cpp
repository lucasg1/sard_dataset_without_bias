namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    int * VAR1 = (int *)ALLOCA(50*sizeof(int));
    int * VAR2 = (int *)ALLOCA(100*sizeof(int));
    data = VAR1;
    {
        int * data = dataRef;
        {
            int source[100] = {0}; 
<START>
            memcpy(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
        }
    }
}
} 
