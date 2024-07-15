void FUN0(int * data)
{
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    funcPtr(data);
}
