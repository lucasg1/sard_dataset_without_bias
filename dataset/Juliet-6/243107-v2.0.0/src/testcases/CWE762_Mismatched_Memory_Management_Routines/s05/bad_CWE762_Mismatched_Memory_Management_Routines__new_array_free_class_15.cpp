namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new TwoIntsClass[100];
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        free(data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
