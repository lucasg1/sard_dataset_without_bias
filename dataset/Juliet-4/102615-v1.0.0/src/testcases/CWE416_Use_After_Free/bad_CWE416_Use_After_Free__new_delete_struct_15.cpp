namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new twoIntsStruct;
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
        printStructLine(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
