namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new twoIntsStruct[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    else
    {
        twoIntsStruct VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine(&data[0]);
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
<END>
        ; 
    }
    else
    {
        delete[] data;
    }
}
} 
