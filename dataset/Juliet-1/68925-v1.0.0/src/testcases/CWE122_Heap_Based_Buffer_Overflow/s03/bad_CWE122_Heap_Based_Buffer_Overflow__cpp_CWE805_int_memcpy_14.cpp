namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalFive==5)
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
