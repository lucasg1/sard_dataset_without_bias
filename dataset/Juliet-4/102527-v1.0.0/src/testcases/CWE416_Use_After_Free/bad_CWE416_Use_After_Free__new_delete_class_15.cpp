namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printIntLine(data->intOne);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
