namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(twoIntsStruct * data)
{
    if(VAR1)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    VAR1 = 1; 
    FUN0(data);
}
} 
