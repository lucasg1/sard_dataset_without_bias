namespace NAMESPACE0
{
void FUN0(twoIntsStruct &data)
{
    ; 
}
void FUN1()
{
    twoIntsStruct data;
    FUN0(data);
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
}
} 
