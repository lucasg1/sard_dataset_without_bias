void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
    }
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
    if(globalReturnsTrue())
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
