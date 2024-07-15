void FUN0()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    ; 
    goto sink;
sink:
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
void FUN1()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    goto source;
source:
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    goto sink;
sink:
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
