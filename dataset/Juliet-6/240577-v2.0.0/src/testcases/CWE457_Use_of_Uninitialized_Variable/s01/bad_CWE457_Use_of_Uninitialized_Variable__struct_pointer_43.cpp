namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    ; 
}
void FUN1()
{
    twoIntsStruct * data;
    FUN0(data);
<START>
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
<END>
}
} 
