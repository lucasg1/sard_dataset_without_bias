static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    if(STATIC_CONST_TRUE)
    {
        data = &VAR0;
    }
<START>
    printStructLine((twoIntsStruct *)data);
<END>
}
