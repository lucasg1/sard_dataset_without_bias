static int * FUN0(int * data)
{
    data = (int *)malloc(1*sizeof(int));
    return data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = FUN0(data);
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
