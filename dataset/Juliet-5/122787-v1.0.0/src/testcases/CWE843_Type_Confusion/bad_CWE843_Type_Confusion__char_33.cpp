namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    {
        void * data = dataRef;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
} 
