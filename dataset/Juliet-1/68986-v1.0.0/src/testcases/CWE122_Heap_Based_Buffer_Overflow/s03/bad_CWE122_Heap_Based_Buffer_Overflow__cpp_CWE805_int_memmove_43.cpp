namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int[50];
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
