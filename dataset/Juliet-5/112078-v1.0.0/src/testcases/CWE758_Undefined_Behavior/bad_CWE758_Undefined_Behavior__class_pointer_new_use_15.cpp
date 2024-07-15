namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        TwoIntsClass * * pointer = new TwoIntsClass *;
<START>
        TwoIntsClass * data = *pointer; 
<END>
        delete pointer;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
