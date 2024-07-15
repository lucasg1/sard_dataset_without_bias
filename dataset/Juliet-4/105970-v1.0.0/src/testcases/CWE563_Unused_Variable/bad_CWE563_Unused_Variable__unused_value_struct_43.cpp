namespace NAMESPACE0
{
void FUN0(twoIntsStruct &data)
{
    data.intOne = 0;
    data.intTwo = 0;
}
void FUN1()
{
    twoIntsStruct data;
    FUN0(data);
<START>
    data.intOne = 1;
<END>
    data.intTwo = 1;
    printStructLine(&data);
}
} 
