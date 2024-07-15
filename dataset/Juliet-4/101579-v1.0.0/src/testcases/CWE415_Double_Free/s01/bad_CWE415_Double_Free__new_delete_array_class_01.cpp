namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    delete [] data;
<START>
    delete [] data;
<END>
}
} 
