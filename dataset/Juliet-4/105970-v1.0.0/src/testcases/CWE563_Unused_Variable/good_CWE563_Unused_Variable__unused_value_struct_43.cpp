namespace NAMESPACE0
{
void FUN0(twoIntsStruct &data)
{
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
}
void FUN1()
{
    twoIntsStruct data;
    FUN0(data);
    data.intOne = 1;
    data.intTwo = 1;
    printStructLine(&data);
}
void FUN2(twoIntsStruct &data)
{
    data.intOne = 0;
    data.intTwo = 0;
}
void FUN3()
{
    twoIntsStruct data;
    FUN2(data);
    printStructLine(&data);
}
} 
