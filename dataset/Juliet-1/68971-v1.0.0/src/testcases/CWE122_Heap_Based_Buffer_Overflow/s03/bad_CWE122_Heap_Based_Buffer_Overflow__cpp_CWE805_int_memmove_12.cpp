namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new int[50];
    }
    else
    {
        data = new int[100];
    }
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
