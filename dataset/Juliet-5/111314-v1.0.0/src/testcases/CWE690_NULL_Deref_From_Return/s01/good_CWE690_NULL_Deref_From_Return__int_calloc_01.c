void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
