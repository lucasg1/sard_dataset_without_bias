int * FUN0(int * data)
{
    data = (int *)calloc(1, sizeof(int));
    return data;
}
int * FUN0(int * data);
void FUN2()
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
