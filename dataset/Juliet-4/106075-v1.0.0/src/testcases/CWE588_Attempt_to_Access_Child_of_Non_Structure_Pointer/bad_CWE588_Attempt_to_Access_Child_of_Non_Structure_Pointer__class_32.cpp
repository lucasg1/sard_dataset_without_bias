namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    {
        void * data = *dataPtr1;
        data = &VAR2;
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
<START>
        printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
    }
}
} 
