namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    switch(6)
    {
    case 6:
        data = NULL;
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
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
