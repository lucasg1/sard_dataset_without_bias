namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    int VAR1[50];
    int VAR2[100];
    data = VAR2;
    {
        int * data = dataRef;
        {
            int source[100] = {0}; 
            memmove(data, source, 100*sizeof(int));
            printIntLine(data[0]);
        }
    }
}
} 
