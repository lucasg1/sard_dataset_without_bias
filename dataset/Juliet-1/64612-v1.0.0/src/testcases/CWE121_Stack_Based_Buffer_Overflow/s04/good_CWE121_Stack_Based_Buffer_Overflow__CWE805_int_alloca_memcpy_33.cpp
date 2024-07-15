namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    int * VAR1 = (int *)ALLOCA(50*sizeof(int));
    int * VAR2 = (int *)ALLOCA(100*sizeof(int));
    data = VAR2;
    {
        int * data = dataRef;
        {
            int source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int));
            printIntLine(data[0]);
        }
    }
}
} 
