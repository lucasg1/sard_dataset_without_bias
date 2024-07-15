void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(globalReturnsTrueOrFalse())
    {
        data = VAR1;
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
