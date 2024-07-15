namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR1;
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[50];
    VAR1 = data;
    FUN0();
}
} 
