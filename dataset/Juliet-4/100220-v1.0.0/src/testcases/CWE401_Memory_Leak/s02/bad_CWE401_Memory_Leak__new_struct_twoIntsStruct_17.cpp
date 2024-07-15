namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    struct _twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
<END>
        ; 
    }
}
} 
