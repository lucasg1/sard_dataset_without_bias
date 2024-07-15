namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * data = dataRef;
        ; 
    }
}
void FUN1()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * data = dataRef;
        free(data);
    }
}
} 
