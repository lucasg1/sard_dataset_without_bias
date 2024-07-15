void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    free(data);
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    goto sink;
sink:
    printIntLine(data[0]);
}
