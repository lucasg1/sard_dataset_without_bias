namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR1;
    {
        void * data = dataRef;
        printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
    }
}
} 
