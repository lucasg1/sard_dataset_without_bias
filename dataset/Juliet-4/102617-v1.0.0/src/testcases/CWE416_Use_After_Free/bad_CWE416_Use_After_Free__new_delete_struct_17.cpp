namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printStructLine(data);
<END>
    }
}
} 
