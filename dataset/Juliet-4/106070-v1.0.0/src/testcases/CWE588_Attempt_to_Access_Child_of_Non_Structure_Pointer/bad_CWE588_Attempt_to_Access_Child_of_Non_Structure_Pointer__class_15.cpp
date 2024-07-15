namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    switch(6)
    {
    case 6:
        data = &VAR2;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
