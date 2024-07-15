namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    int VAR1[50];
    int VAR2[100];
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
