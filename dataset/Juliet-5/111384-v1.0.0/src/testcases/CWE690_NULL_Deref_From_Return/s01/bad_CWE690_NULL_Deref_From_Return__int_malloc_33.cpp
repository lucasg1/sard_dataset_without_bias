namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    {
        int * data = dataRef;
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}
} 
