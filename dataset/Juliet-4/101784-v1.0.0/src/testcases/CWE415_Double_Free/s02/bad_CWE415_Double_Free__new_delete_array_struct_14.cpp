namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct[100];
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
