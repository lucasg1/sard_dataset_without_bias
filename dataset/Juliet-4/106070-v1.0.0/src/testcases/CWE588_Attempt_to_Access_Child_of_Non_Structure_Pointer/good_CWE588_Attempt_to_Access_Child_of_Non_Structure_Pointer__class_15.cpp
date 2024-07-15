namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = &VAR1;
        break;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
void FUN1()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    switch(6)
    {
    case 6:
        data = &VAR1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
