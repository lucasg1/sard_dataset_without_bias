void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    int * data;
    ; 
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    printIntLine(*data);
}
void FUN2(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    printIntLine(*data);
}
