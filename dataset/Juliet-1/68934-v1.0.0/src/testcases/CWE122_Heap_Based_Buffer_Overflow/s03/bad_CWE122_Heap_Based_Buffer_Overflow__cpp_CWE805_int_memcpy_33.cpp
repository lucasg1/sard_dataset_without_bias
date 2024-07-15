namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int[50];
    {
        int * data = dataRef;
        {
            int source[100] = {0}; 
<START>
            memcpy(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
