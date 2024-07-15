static int * FUN0(int * data)
{
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
static int * FUN2(int * data)
{
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    return data;
}
void FUN3()
{
    int * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}
