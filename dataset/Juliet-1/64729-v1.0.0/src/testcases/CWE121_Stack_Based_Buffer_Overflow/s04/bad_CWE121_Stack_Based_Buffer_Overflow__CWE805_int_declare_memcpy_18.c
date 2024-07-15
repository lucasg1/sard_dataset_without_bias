void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    goto source;
source:
    data = VAR0;
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
