namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    twoIntsStruct VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    data = &VAR2;
    {
        void * data = dataRef;
<START>
        printStructLine((twoIntsStruct *)data);
<END>
    }
}
} 
