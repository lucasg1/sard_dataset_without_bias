void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    while(1)
    {
        data = VAR0;
        break;
    }
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
