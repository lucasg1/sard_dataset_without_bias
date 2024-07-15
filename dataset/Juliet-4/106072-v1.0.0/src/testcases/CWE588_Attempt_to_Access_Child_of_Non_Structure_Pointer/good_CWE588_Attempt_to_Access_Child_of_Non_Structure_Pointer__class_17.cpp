namespace NAMESPACE0
{
void FUN0()
{
    int h;
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    for(h = 0; h < 1; h++)
    {
        data = &VAR1;
    }
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
}
} 
