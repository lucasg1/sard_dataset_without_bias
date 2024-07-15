static int * FUN0(int * data)
{
    data = (int *)realloc(data, 1*sizeof(int));
    return data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = FUN0(data);
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
