void FUN0()
{
    int j;
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    for(j = 0; j < 1; j++)
    {
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}
