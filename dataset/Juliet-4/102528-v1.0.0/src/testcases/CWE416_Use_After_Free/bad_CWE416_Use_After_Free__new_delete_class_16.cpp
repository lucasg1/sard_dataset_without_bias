namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
        break;
    }
    while(1)
    {
<START>
        printIntLine(data->intOne);
<END>
        break;
    }
}
} 
