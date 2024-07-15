namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct[100];
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
    data = new twoIntsStruct[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    delete [] data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
