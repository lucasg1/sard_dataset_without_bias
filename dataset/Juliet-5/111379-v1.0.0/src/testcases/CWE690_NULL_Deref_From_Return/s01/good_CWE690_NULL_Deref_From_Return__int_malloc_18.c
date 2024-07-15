void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    goto sink;
sink:
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
