namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new int[50];
    }
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
