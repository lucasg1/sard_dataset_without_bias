namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new TwoIntsClass[100];
        delete [] data;
    }
    if(globalFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
