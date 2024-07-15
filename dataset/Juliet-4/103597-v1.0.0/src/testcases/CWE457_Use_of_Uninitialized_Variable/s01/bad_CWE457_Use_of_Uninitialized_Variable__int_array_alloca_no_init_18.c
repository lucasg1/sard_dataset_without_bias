void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    goto source;
source:
    ; 
    goto sink;
sink:
    {
        int i;
        for(i=0; i<10; i++)
        {
<START>
            printIntLine(data[i]);
<END>
        }
    }
}
