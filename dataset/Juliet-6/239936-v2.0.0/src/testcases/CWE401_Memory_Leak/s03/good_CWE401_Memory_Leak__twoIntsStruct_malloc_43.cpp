namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    ; 
}
void FUN2(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
