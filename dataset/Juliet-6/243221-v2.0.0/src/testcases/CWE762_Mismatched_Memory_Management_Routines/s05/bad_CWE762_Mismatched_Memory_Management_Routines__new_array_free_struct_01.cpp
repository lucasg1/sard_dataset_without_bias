namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
<START>
    free(data);
<END>
}
} 
