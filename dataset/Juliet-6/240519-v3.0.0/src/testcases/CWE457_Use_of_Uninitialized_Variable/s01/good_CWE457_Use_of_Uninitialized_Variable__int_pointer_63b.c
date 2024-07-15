void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = (int *)malloc(sizeof(int));
    if (data == NULL) {exit(-1);}
    *data = 5;
    FUN0(&data);
}
void FUN2(int * * data);
void FUN3()
{
    int * data;
    ; 
    FUN2(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(*data);
}
void FUN2(int * * dataPtr)
{
    *dataPtr = (int *)malloc(sizeof(int));
    if (*dataPtr  == NULL) {exit(-1);}
    int * data = *dataPtr;
    *data = 5;
    printIntLine(*data);
}
