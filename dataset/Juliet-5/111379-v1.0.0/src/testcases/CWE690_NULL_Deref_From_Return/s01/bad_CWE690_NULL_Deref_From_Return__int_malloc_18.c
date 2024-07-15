void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    goto sink;
sink:
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
