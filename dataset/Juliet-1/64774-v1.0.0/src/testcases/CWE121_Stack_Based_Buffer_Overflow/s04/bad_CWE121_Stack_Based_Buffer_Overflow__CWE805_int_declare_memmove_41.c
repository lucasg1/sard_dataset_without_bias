void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
<START>
    data = VAR0;
<END>
    FUN0(data);
}
