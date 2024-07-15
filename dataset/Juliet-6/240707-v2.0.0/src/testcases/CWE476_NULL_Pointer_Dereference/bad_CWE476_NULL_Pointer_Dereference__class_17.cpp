namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    TwoIntsClass * data;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
