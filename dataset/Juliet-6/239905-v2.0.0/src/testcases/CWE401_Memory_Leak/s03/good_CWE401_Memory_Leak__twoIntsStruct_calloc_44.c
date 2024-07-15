void FUN0(twoIntsStruct * data)
{
    ; 
}
void FUN1()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN0;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    funcPtr(data);
}
void FUN2(twoIntsStruct * data)
{
    free(data);
}
void FUN3()
{
    twoIntsStruct * data;
    void (*funcPtr) (twoIntsStruct *) = FUN2;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    funcPtr(data);
}
