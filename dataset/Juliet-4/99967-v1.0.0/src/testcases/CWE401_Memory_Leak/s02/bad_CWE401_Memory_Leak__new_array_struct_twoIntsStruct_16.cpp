namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = new struct _twoIntsStruct[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
        break;
    }
    while(1)
    {
<START>
<END>
        ; 
        break;
    }
}
} 
