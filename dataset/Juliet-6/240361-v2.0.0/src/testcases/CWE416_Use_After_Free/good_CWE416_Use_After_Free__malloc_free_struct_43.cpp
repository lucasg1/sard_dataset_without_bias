namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
    printStructLine(&data[0]);
}
void FUN2(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    free(data);
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
