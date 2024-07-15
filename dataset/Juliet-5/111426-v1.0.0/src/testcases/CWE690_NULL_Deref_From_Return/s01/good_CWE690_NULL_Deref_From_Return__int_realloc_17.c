void FUN0()
{
    int k;
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
