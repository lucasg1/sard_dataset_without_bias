namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct[100];
        delete [] data;
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
