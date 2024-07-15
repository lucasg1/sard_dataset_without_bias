void FUN0(int * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}
